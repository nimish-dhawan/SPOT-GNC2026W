clc
close all

simFileName = 'sep_distance_plot4';
LOC = 'C:\Users\chris\OneDrive\Documents\SPOT-GNC2026W\Projects\GNC2026W\Saved Data\';
filename = [LOC, simFileName, '\', 'dataPacket_SIM.mat'];

dat = load(filename);

% --- Get numeric time vector (timeseries -> numeric) ---
tsT = simOut.dataPacket.Time_s;      % timeseries
t   = tsT.Time(:);                  % numeric column

% --- Grab signal and make sure it is numeric column ---
flag = dat.dataClass.binary_sep_difference;

if isa(flag,'timeseries')
    flag = flag.Data;
end
flag = flag(:);

% --- Force arrays to same length (prevents out-of-bounds) ---
n = min([numel(t), numel(flag)]);
t    = t(1:n);
flag = flag(1:n);

% --- Crop window ---
idx = (t >= 65) & (t <= 235);

% --- Plot (MATCHED GEOMETRY) ---
fig = figure;
set(fig,'Units','inches','Position',[1 1 6.5 4])

stairs(t(idx), flag(idx), 'LineWidth',1.2, 'Color','k')
set(gca,'Units','normalized','Position',[0.13 0.15 0.80 0.75])
grid on

xlabel('Time (seconds)')
ylabel('Binary Output')
title('Capture Authorization Flag')

xlim([65 235])
ylim([0 1.1])
yticks([0 1])

% --- Times New Roman everywhere (MATCHED FONT SIZE) ---
set(gca,'FontName','Times New Roman','FontSize',12)
set(findall(fig,'-property','FontName'),'FontName','Times New Roman')