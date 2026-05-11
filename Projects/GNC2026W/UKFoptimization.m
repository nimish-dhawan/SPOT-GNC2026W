% Debugging and tuning UKF offline
% Nimish Dhawan
% April 4th, 2026

clc
close all

%% Initializing and loading dataset =======================================
[file,location] = uigetfile('.mat');

if isempty(file) || strcmp(file,"")
    return
else
    filename = [location, file];
    dat = load(filename);
end

%% Extracting data ========================================================
t       = dat.dataClass_rt.Time_s.Data;
y       = [dat.dataClass_rt.VIS_LAR_States_Px_mm.Data,...
           dat.dataClass_rt.VIS_LAR_States_Py_mm.Data,...
           dat.dataClass_rt.VIS_LAR_States_Rz_rad.Data];
isValid = dat.dataClass_rt.isValid.Data;
r_c_I   = [dat.dataClass_rt.RED_Px_m.Data,...
           dat.dataClass_rt.RED_Py_m.Data,...
           dat.dataClass_rt.RED_Rz_rad.Data];
r_t_I   = [dat.dataClass_rt.BLACK_Px_m.Data,...
           dat.dataClass_rt.BLACK_Py_m.Data,...
           dat.dataClass_rt.BLACK_Rz_rad.Data];
v_t_I   = [dat.dataClass_rt.BLACK_Vx_mpers.Data,...
           dat.dataClass_rt.BLACK_Vy_mpers.Data,...
           dat.dataClass_rt.BLACK_RzD_radpers.Data];
x_est_Exp = [dat.dataClass_rt.BLACK_Px_Filtered_m.Data,...
           dat.dataClass_rt.BLACK_Py_Filtered_m.Data,...
           dat.dataClass_rt.BLACK_Rz_Filtered_rad.Data];

% Finding index for 55s
try
    clear found
    found = 0;
    for k = 1:length(t)
        if t(k) == 55.00 && found == 0
            index55s = k+1;
            found    = 1;
        end
    end
catch ME
    warning('Experiment too short');
    return
end

% Finding the grab flag index
try
    clear found
    found = 0;
    for p = 1:length(t)
        grab = dat.dataClass_rt.ARM_Grab_Complete.Data(p);
        if grab == 1 && found == 0
            grabIndex = p;
            found     = 1;
        else
            grabIndex = length(t);
        end
    end
catch 
    grabIndex = length(t);
end
periodgnc = [t(index55s), t(grabIndex)];

%% Initializing UKF parameters ============================================
a = 1;
b = 2;
k = 5;
dt = 0.05;

% Covariance and state initialization for UKF
F  = [eye(3), dt*eye(3); zeros(3), eye(3)];
G  = [0.5*(dt^2)*eye(3); dt*eye(3)];
q  = [1e-6, 1e-6, 1e-6];
Q  = G*diag(q)*G';
P0 = F*(0.2*eye(6))*F' + Q;
x0 = [1.1*[X0_blk;Y0_blk;Z0_blk]; zeros(3,1)]; 
rx = 1e-6;
rt = 1e-4;
R = diag([rx, rx, rt]);

% Initializing time period
period = [t(1185), t(end)];

%% Running UKF in loop ====================================================
% Allocating memory for filter output
clear x_est P_est res y_I NEES NIS dM

x_est  = zeros(6,length(t));
P_est  = zeros(6,6,length(t));
res    = zeros(3,length(t));
y_I    = zeros(3,length(t));
NEES   = zeros(length(t),1);
NIS    = zeros(length(t),1);
dM     = zeros(length(t),1);
sigma3 = zeros(6,length(t));

% Running the UKF
for i = index55s:grabIndex
    est = UKF(y(i,:)', isValid(i), r_c_I(i,:)', dt, b, k, a, R, Q, P0, x0);
    
    % Storing estimates
    x_est(:,i)   = est.x;
    P_est(:,:,i) = est.P;
    res(:,i)     = est.r;
    NIS(i,1)     = est.NIS;
    dM(i,1)      = sqrt(NIS(i,1));
    sigma3(:,i)  = [3*sqrt(P_est(1,1,i));
                    3*sqrt(P_est(2,2,i));
                    3*sqrt(P_est(3,3,i));
                    3*sqrt(P_est(4,4,i));
                    3*sqrt(P_est(5,5,i));
                    3*sqrt(P_est(6,6,i));];

    % Mapping VIS measurements to inertial frame
    y_I(:,i) =  rot(y(i,:)',r_c_I(i,:)');

    % NEES calculation
    x_true    = [r_t_I(i,:)';v_t_I(i,:)'];
    Pinv      = inv(est.P);
    NEES(i,1) = (x_true-x_est(:,i))' * Pinv * (x_true-x_est(:,i));
end

%% Plotting results
close all

% Calculating 3 sigma bounds
boundhi = x_est + sigma3;
boundlo = x_est - sigma3;

figure('Name','Target Pose Estimates and Ground Truth')
tiledlayout(3, 1, 'TileSpacing', 'compact', 'Padding', 'compact');
labels = {'x [m]', 'y [m]', '\theta [rad]'};
for i = 1:3
    nexttile
    hold on; grid on;
    tt = t(:);
    upper = boundhi(i,:).';
    lower = boundlo(i,:).';

    x_fill = [tt; flipud(tt)];
    y_fill = [upper; flipud(lower)];

    fill(x_fill, y_fill, 'b', ...
        'FaceAlpha', 0.1, 'EdgeColor', 'b');
    plot(t, r_t_I(:,i),'r')
    plot(t, x_est(i,:),'k')
    plot(t, y_I(i,:), 'b*', 'MarkerSize', 0.5)
    ylabel(labels(i)); xlim(periodgnc); 
    if i == 3
        xlabel('Time [s]')
    elseif i == 1
        legend1 = legend('3\sigma UKF','Ground Truth', 'Estimates', 'Measurements', 'Location',...
                         'northoutside');
        set(legend1,'NumColumns',2,'Location','northoutside');
    end
    ax = gca();
    ax.FontSize = 10;
    ax.FontName = "Times New Roman";
end
% formatfig(0.4,0.4)


%% Functions ==============================================================
function y_I = rot(y,r_C_I)
% Takes measurements in camera reference frame and rotates to inertial
    
    wrap = @(x) atan2(sin(x), cos(x));

    if norm(y(1:2)) == 0
        y = [NaN; NaN; NaN];
    end

    l_cam_x = 0.125; %m, offset in x from origin of Red, left camera
    l_cam_y = 0.03; %m, offset in y from origin of Red, left camera
    LAR_x   = 0.145; %m
    
    y(1:2) = y(1:2) + [l_cam_x; l_cam_y];
    th_C   = r_C_I(3);
    th_REL = y(3);
    th_T   = th_C+th_REL;
    
    C_IC    = [cos(th_C) -sin(th_C); sin(th_C) cos(th_C)]; % Chaser to inertial ref frame rotation matrix
    C_IT    = [cos(th_T) -sin(th_T); sin(th_T) cos(th_T)]; % Target to inertial ref frame rotation matrix
    xy_T_I  = r_C_I(1:2) + C_IC*y(1:2);
    
    y_I     = [xy_T_I-C_IT*[LAR_x;0]; wrap(th_T)];

end
