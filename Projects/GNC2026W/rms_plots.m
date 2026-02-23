clc
close all

simFileName = 'MEKF_Plot2_20Feb2026';   % <-- your folder name
LOC = 'C:\Users\chris\OneDrive\Documents\SPOT-GNC2026W\Projects\GNC2026W\Saved Data\';
filename = [LOC, simFileName, '\', 'dataPacket_SIM.mat'];

dat = load(filename);

% --- Time ---
tsT = simOut.dataPacket.Time_s;
t   = tsT.Time(:);

% --- Signals ---
x_noisy   = dat.dataClass.BLACK_X_Noisy;
y_noisy   = dat.dataClass.BLACK_Y_Noisy;
th_noisy  = dat.dataClass.BLACK_theta_noisy;

x_filt    = dat.dataClass.BLACK_Px_Filtered_m;
y_filt    = dat.dataClass.BLACK_Py_Filtered_m;
th_filt   = dat.dataClass.BLACK_Rz_Filtered_rad;

% --- Convert timeseries -> numeric ---
signals = {'x_noisy','y_noisy','th_noisy','x_filt','y_filt','th_filt'};
for k = 1:numel(signals)
    sig = eval(signals{k});
    if isa(sig,'timeseries')
        sig = sig.Data;
    end
    eval([signals{k} ' = sig(:);'])
end

% --- Match length ---
n = min([numel(t), numel(x_noisy), numel(x_filt)]);
t        = t(1:n);
x_noisy  = x_noisy(1:n);  y_noisy  = y_noisy(1:n);  th_noisy = th_noisy(1:n);
x_filt   = x_filt(1:n);   y_filt   = y_filt(1:n);   th_filt  = th_filt(1:n);

% --- Window (same as your plots) ---
idx = (t >= 65) & (t <= 235);
tA  = t(idx);

xN = x_noisy(idx);  yN = y_noisy(idx);  thN = th_noisy(idx);
xF = x_filt(idx);   yF = y_filt(idx);   thF = th_filt(idx);

% --- Residual (noise content) ---
rx  = xN - xF;
ry  = yN - yF;
rth = thN - thF;

% --- Steady-state = last 30% of window ---
N = numel(tA);
idxSS = round(0.7*N):N;

% --- Helper funcs ---
rmsf = @(v) sqrt(mean(v.^2,'omitnan'));
stdf = @(v) std(v,'omitnan');

% --- Residual noise metrics (recommended) ---
res = @(r) struct('STD',stdf(r(idxSS)), 'RMS',rmsf(r(idxSS)), 'PkPk',max(r(idxSS))-min(r(idxSS)));

mxR  = res(rx);
myR  = res(ry);
mthR = res(rth);

% --- Detrended jitter metrics (optional but nice) ---
dxN  = detrend(xN);  dxF  = detrend(xF);
dyN  = detrend(yN);  dyF  = detrend(yF);
dthN = detrend(thN); dthF = detrend(thF);

jit = @(a,b) struct( ...
    'STD_noisy', stdf(a(idxSS)), ...
    'STD_filt',  stdf(b(idxSS)), ...
    'reduction_pct', (stdf(a(idxSS))-stdf(b(idxSS)))/stdf(a(idxSS))*100 );

mxJ  = jit(dxN, dxF);
myJ  = jit(dyN, dyF);
mthJ = jit(dthN, dthF);

% --- Convergence time based on residual RMS dropping near steady-state ---
dt = median(diff(tA));
winSec = 5;                   % moving window size
winN = max(3, round(winSec/dt));

% threshold = 1.25x steady-state residual RMS (tunable but reasonable)
thrX  = 1.25 * mxR.RMS;
thrY  = 1.25 * myR.RMS;
thrTh = 1.25 * mthR.RMS;

tConv_x  = conv_time_rms(tA, rx,  thrX,  winN);
tConv_y  = conv_time_rms(tA, ry,  thrY,  winN);
tConv_th = conv_time_rms(tA, rth, thrTh, winN);

% --- Print memo-friendly results ---
fprintf('\n===== MEKF Noise / Smoothness Metrics (65–235 s window) =====\n');

fprintf('\nResidual metrics (recommended; r = noisy - filtered):\n');
fprintf('X residual:   STD = %.4g m,   RMS = %.4g m,   PkPk = %.4g m,   conv ≈ %.2f s\n', mxR.STD,  mxR.RMS,  mxR.PkPk,  tConv_x);
fprintf('Y residual:   STD = %.4g m,   RMS = %.4g m,   PkPk = %.4g m,   conv ≈ %.2f s\n', myR.STD,  myR.RMS,  myR.PkPk,  tConv_y);
fprintf('Yaw residual: STD = %.4g rad, RMS = %.4g rad, PkPk = %.4g rad, conv ≈ %.2f s\n', mthR.STD, mthR.RMS, mthR.PkPk, tConv_th);

fprintf('\nDetrended jitter reduction (optional):\n');
fprintf('X jitter STD:   noisy = %.4g, filt = %.4g  (%.1f%% reduction)\n', mxJ.STD_noisy,  mxJ.STD_filt,  mxJ.reduction_pct);
fprintf('Y jitter STD:   noisy = %.4g, filt = %.4g  (%.1f%% reduction)\n', myJ.STD_noisy,  myJ.STD_filt,  myJ.reduction_pct);
fprintf('Yaw jitter STD: noisy = %.4g, filt = %.4g  (%.1f%% reduction)\n', mthJ.STD_noisy, mthJ.STD_filt, mthJ.reduction_pct);

% ---- local function ----
function tConv = conv_time_rms(t, r, thr, winN)
    % first time moving RMS(r) stays below thr for the whole window
    rr = r(:);
    movRMS = sqrt(movmean(rr.^2, winN, 'omitnan'));
    ok = movRMS < thr;
    % require sustained ok for ~winN samples
    sustained = conv(double(ok), ones(winN,1), 'same') >= winN;
    idx = find(sustained, 1, 'first');
    if isempty(idx), tConv = NaN; else, tConv = t(idx); end
end