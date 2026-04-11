%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% NIMISH DHAWAN
% plotfig
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% clc
close all


% Loading the datafile
[file,location] = uigetfile('.mat');

if isempty(file) || strcmp(file,"")
    return
else
    filename = [location, file];
    dat = load(filename);
end

%%
% Toggle on/off saving all the plots automatically
savefigs = 1;
% Toggle on/off animation
anim = 0;
% Time frame for plotting
t = dat.dataClass_rt.Time_s.Data;

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
    period = [t(index55s), t(end)];
catch ME
    uialert('Experiment too short');
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
        end
    end
catch 
    grabIndex = length(t);
end

periodgnc = [t(index55s), t(grabIndex)];
idx = index55s:grabIndex;

% Finding extend arm flag index
try
    clear found p
    found = 0;
    for p = 1:length(t)
        extend = dat.dataClass_rt.ARM_Extend.Data(p);
        if extend == 1 && found == 0
            extendIndex = p;
            found     = 1;
        end
    end
    periodARM = [t(extendIndex), t(end)];
catch 
    warning('Data not found');
end
%%
close all
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Plotting Data
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Make sure you give your figures a name in order to properly save them as 
% pdf files 

wrap = @(x) atan2(sin(x), cos(x));

% Example(s):
% 1) Trajectory plot fitted with a [3x1] plot:
    % \includegraphics[width=0.55\linewidth]{Figures/Trajectory.pdf}
    % \includegraphics[width=0.375\linewidth]{Figures/Filter Performance.pdf}


% =========================================================================
% Target pose estimates and ground truth with filter performance
% =========================================================================

% Extracting Data
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
y_I     = zeros(3,length(t));
x_est   = [dat.dataClass_rt.BLACK_Px_Filtered_m.Data,...
           dat.dataClass_rt.BLACK_Py_Filtered_m.Data,...
           dat.dataClass_rt.BLACK_Rz_Filtered_rad.Data];

for i = 1:length(t)
    y_I(:,i) =  rot(y(i,:)',r_c_I(i,:)');
end

maxlim = max(abs(r_t_I));

figure('Name','Target Pose Estimates and Ground Truth')
tiledlayout(3, 1, 'TileSpacing', 'compact', 'Padding', 'compact');
labels = {'x [m]', 'y [m]', '\theta [rad]'};
for i = 1:3
    nexttile
    plot(t, r_t_I(:,i),'r')
    hold on; grid on;
    plot(t, x_est(:,i),'k')
    plot(t, y_I(i,:), 'b*', 'MarkerSize', 0.5)
    ylabel(labels(i)); xlim(periodgnc); 
    if i == 3
        xlabel('Time [s]')
    elseif i == 1
        legend1 = legend('Ground Truth', 'Estimates', 'Measurements', 'Location',...
                         'northoutside');
        set(legend1,'NumColumns',2,'Location','northoutside');
    end
    ax = gca();
    ax.FontSize = 10;
    ax.FontName = "Times New Roman";
end
formatfig(0.4,0.4)

err = wrap(x_est - r_t_I);
rootmeanerr = sqrt(mean(err(idx,1:3).^2));
fprintf('RMSE for UKF [cm,cm,rad]: [%.4f, %.4f, %.4f]\n',...
         rootmeanerr(1)*100,rootmeanerr(2)*100,rootmeanerr(3)*180/pi);
errVIS = wrap(y_I' - r_t_I);
rootmeanerrVIS = sqrt(mean(errVIS(idx,1:3).^2,'omitnan'));
fprintf('RMSE for VIS [cm,cm,rad]: [%.4f, %.4f, %.4f]\n',...
         rootmeanerrVIS(1)*100,rootmeanerrVIS(2)*100,rootmeanerrVIS(3)*180/pi);


figure('Name','Filter Performance')
tiledlayout(3, 1, 'TileSpacing', 'compact', 'Padding', 'compact');
labels = {'\deltax [cm]', '\deltay [cm]', '\delta\theta [rad]'};
for i = 1:3
    nexttile
    hold on; grid on; box on;
    if i ~= 3
        plot(t, errVIS(:,i)*100,'b*', 'MarkerSize', 0.2)
        plot(t, err(:,i)*100,'r')
    else
        plot(t, errVIS(:,i),'b*', 'MarkerSize', 0.2)
        plot(t, err(:,i),'r')
    end
    ylabel(labels(i)); xlim(periodgnc);
    if i == 3
        xlabel('Time [s]')
    elseif i == 1
        legend('Measurements', 'Estimates', 'Location',...
               'northoutside','Orientation','horizontal')
    end
    ax = gca();
    ax.FontSize = 10;
    ax.FontName = "Times New Roman";
end
formatfig(0.4,0.4)

% =========================================================================
% Controller error
% =========================================================================
% For 3x1 plots, 0.4x0.4 size is recommended for placing next to trajectory
% plot

dx  = dat.dataClass_rt.RED_Px_m.Data...
      - dat.dataClass_rt.RED_Px_Path_m.Data;
dy  = dat.dataClass_rt.RED_Py_m.Data ...
      - dat.dataClass_rt.RED_Py_Path_m.Data;
dth = wrap(dat.dataClass_rt.RED_Rz_rad.Data ...
      - dat.dataClass_rt.RED_Rz_Path_rad.Data );

try
    delta = [dat.dataClass_rt.error_Px_m.Data,...
             dat.dataClass_rt.error_Py_m.Data,...
             dat.dataClass_rt.error_Rz_rad.Data];
catch ME
    delta = [dx, dy, dth];
end

figure('Name','Controller Error')
tiledlayout(3, 2, 'TileSpacing', 'compact', 'Padding', 'compact');
labels = {'\deltax [m]', '\deltay [m]', '\delta\theta [rad]'};
for i = 1:3
    nexttile(2*i-1)   

    plot(t, delta(:,i), 'k')
    hold on; grid on;
    ylabel(labels{i})
    xlim(periodgnc)
    if i == 3
        xlabel('Time [s]')
    end
    ax = gca();
    ax.FontSize = 10;
    ax.FontName = "Times New Roman";
end

nexttile(2,[3 1])
plot(t, dat.dataClass_rt.Separation_m.Data, 'r')
hold on; grid on;
plot(t, dat.dataClass_rt.Desired_Separation_m.Data, 'k')
xlabel('Time [s]'); ylabel('Separation [m]');
xlim(periodgnc)
legend('Actual', 'Desired')
formatfig(0.8,0.4)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
formatfig(0.9,0.4)

% =========================================================================
% ARM Performance
% =========================================================================
EEpos = [dat.dataClass_rt.EE_Px_m.Data,...
         dat.dataClass_rt.EE_Py_m.Data];
EEdes = [dat.dataClass_rt.EE_Px_Desired_m.Data,...
         dat.dataClass_rt.EE_Py_Desired_m.Data];

figure('Name','Arm Performance')
tiledlayout(2, 1, 'TileSpacing', 'compact', 'Padding', 'compact');
labels = {'x_{ee}', 'y_{ee}'};
for i = 1:2
    nexttile 
    plot(t, EEdes(:,i), 'k')
    hold on; grid on;
    plot(t, EEpos(:,i), 'r')
    ylabel(labels{i})
    xlim(periodARM)
    if i == 1
        legend('Desired','Actual','Location','northoutside','Orientation','horizontal');
    elseif i == 2
        xlabel('Time [s]')
    end
    ax = gca();
    ax.FontSize = 10;
    ax.FontName = "Times New Roman";
end
formatfig(0.4,0.4)

%%
% =========================================================================
% Trajectory plots (Courtney's code, with LAR added)
% =========================================================================
% Resizing the plot is not recommended. For any plots to add besides this
% plot, 0.4 width scale is recommended.
[time,inds,~] = unique(t);

DATA_STARTTIME = index55s;          

unique_time = time(DATA_STARTTIME:end);
unique_inds = inds(DATA_STARTTIME:end);

expdata_RED_pos_x      = dat.dataClass_rt.RED_Px_m.Data(unique_inds);
expdata_RED_pos_y      = dat.dataClass_rt.RED_Py_m.Data(unique_inds);
expdata_RED_pos_th     = dat.dataClass_rt.RED_Rz_rad.Data(unique_inds);
expdata_BLACK_pos_x    = dat.dataClass_rt.BLACK_Px_m.Data(unique_inds);
expdata_BLACK_pos_y    = dat.dataClass_rt.BLACK_Py_m.Data(unique_inds);
expdata_BLACK_pos_th   = dat.dataClass_rt.BLACK_Rz_rad.Data(unique_inds);
expdata_BLUE_pos_x     = dat.dataClass_rt.BLUE_Px_m.Data(unique_inds);

try
    ARMq1 = dat.dataClass_rt.Joint_q1.Data(unique_inds);
    ARMq2 = dat.dataClass_rt.Joint_q2.Data(unique_inds);
    ARMq3 = dat.dataClass_rt.Joint_q3.Data(unique_inds);
    ArmGrab = dat.dataClass_rt.ARM_Grab_Complete.Data(unique_inds);
catch ME
    warning('No data for arm.');
end

% Finding grab index in unique_inds
try
    clear found grabIndex
    found = 0;
    for p = 1:length(unique_time)
        grab = ArmGrab(p);
        if grab == 1 && found == 0
            grabIndex = p;
            found     = 1;
        end
    end
catch 
    warning('Index not found, using alternative');
    grabIndex = length(expdata_RED_pos_x);
end

% Static plot 
figure('Name','Trajectory')
% User can specify indices to show snapshots of the platforms. Typically, 
% these would be the initial and final conditions, but can also include 
% intermediate snapshots
plotting_indices = [grabIndex,length(expdata_RED_pos_x)]; 
% plotting_indices = [1, unique_inds(end)]; 
alpha_values     = [0.3,1];
% alpha_values     = [0.2*ones(1,length(plotting_indices)-1) 1];    % transparency for each snapshot; must be same length as 'plotting_indices'

% Plotting trajectory
exphdl = plot(expdata_RED_pos_x(1:plotting_indices(end)),expdata_RED_pos_y(1:plotting_indices(end)), 'r','Linewidth',1,'DisplayName','Trial');
hold on
% plot(expdata_BLACK_pos_x(1:plotting_indices(end)),expdata_BLACK_pos_y(1:plotting_indices(end)), 'k','Linewidth',1)

% Plotting spacecraft shapes
for ii = 1:length(plotting_indices)
    frame = plotting_indices(ii);
    alpha = alpha_values(ii);

    spacecraft = DrawSpacecraft([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),5]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',alpha,'Linewidth',0.5)
    
    try
        [shoulder,elbow,wrist] = DrawARM([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),ARMq1(frame),ARMq2(frame),ARMq3(frame)]);
        patch(shoulder(:,1), shoulder(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(elbow(:,1), elbow(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(wrist(:,1), wrist(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
    catch ME
        warning('No arm data available')
    end

    spacecraft = DrawSpacecraft([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame),7]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',alpha,'Linewidth',0.5)
end

xlabel('X-Position [m]')
ylabel('Y-Position [m]')
grid on
box on
axis equal
xlim([0 3.5])
ylim([0 2.4])
% legend(exphdl, 'Location', 'NorthWest')
formatfig(0.7,0.4)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% Arm motion
figure('Name','Arm Motion')
% User can specify indices to show snapshots of the platforms. Typically, 
% these would be the initial and final conditions, but can also include 
% intermediate snapshots
plotting_indices = [grabIndex-200,grabIndex,grabIndex+200,length(expdata_RED_pos_x)]; 
alpha_values     = [0.2*ones(1,2),0.4,1];

% Plotting trajectory
hold on

% Plotting spacecraft shapes
for ii = 1:length(plotting_indices)
    frame = plotting_indices(ii);
    alpha = alpha_values(ii);

    spacecraft = DrawSpacecraft([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),5]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',alpha,'Linewidth',0.5)
    
    try
        [shoulder,elbow,wrist] = DrawARM([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),ARMq1(frame),ARMq2(frame),ARMq3(frame)]);
        patch(shoulder(:,1), shoulder(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(elbow(:,1), elbow(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(wrist(:,1), wrist(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
    catch ME
        warning('No arm data available')
    end

    spacecraft = DrawSpacecraft([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame),7]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',alpha,'Linewidth',0.5)
end

xlabel('X-Position [m]')
ylabel('Y-Position [m]')
grid on
box on
axis equal
xlim([0 3.5])
ylim([0 2.4])
% legend(exphdl, 'Location', 'NorthWest')
formatfig(0.7,0.4)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";


%%
% =========================================================================
% Trajectory animation (Courtney's code, with LAR added)
% =========================================================================

if anim == 1 % Trajectory animation
    stepsize = 15; % This controls how many frames of data are plotted
    
    fig = figure();
    set(gcf,'color','w')
    
    counter = 1;
    for frame = 1 : stepsize : length(unique_time)
    
        % Plotting trajectory
        exphdl = plot(expdata_RED_pos_x(1:frame),expdata_RED_pos_y(1:frame), 'r-','Linewidth',1,'DisplayName','Trial');
        hold on
        plot(expdata_BLACK_pos_x(1:frame),expdata_BLACK_pos_y(1:frame), 'k-','Linewidth',1)
        
        % Plotting spacecraft shapes

        spacecraft = DrawSpacecraft([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),5]);
        patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',1,'Linewidth',0.5)
        [shoulder,elbow,wrist] = DrawARM([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),ARMq1(frame),ARMq2(frame),ARMq3(frame)]);
        patch(shoulder(:,1), shoulder(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(elbow(:,1), elbow(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(wrist(:,1), wrist(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)

        spacecraft = DrawSpacecraft([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame),7]);
        patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',1,'Linewidth',0.5)

        % cone = DrawPositionCone([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame)]);
        % patch(cone(:,1), cone(:,2), 'k', 'facealpha', 0.05, 'edgecolor', 'k', 'edgealpha', 0.7, 'Linewidth',0.5)
    
        xlabel('X-Position [m]')
        ylabel('Y-Position [m]')
        grid on
        box on
        axis equal;
        ax = gca;
        ax.FontSize = 10;
        ax.FontName = "Times New Roman";  
        
        xlim([0 3.5])
        ylim([0 2.4])
    
        % Save the current figure as a "frame" for the animation
        movieVector(counter) = getframe(gcf) ;
        counter = counter + 1;
    
        clf
    end
    close(fig)
end

%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Exporting Plots
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Creating saved plots folder
savedplotsfolder = [location, 'Saved Plots\'];
if ~exist(savedplotsfolder, 'dir')
    mkdir(savedplotsfolder);
end

% Saving all open figures as PDF plots
if savefigs == 1
    figs = findall(groot, 'Type', 'figure');
    
    for k = 1:numel(figs)
        try
            fig = figs(k);
            name = get(fig, 'Name');
            exportgraphics(fig,[savedplotsfolder, name, '.pdf'])
        catch ME
            warning(['Cannot save the following figure:  ', name]);
        end
    end
end

% Saving all open figures as PNG plots
if savefigs == 1
    figs = findall(groot, 'Type', 'figure');
    
    for k = 1:numel(figs)
        try
            fig = figs(k);
            name = get(fig, 'Name');
            exportgraphics(fig,[savedplotsfolder, name, '.png'])
        catch ME
            warning(['Cannot save the following figure: ', name]);
        end
    end
end

%%
function r_LAR_cam = inertial2Cam(r_t_I, r_c_I)

wrap = @(x) atan2(sin(x), cos(x));

th_t = unwrap(r_t_I(3)); th_c = unwrap(r_c_I(3));
x_c_I = r_c_I(1); y_c_I = r_c_I(2);
sc = sin(th_c); cc = cos(th_c);

x_LAR   = 0.145;   % LAR offset in target BoF, m
l_cam_x = 0.125;   % Offset in x from origin of Red, left camera, m
l_cam_y = 0.03;    % )ffset in y from origin of Red, left camera, m

A = [ cc sc 0;
     -sc cc 0;
      0  0  1];

B = [x_LAR*cos(wrap(th_t-th_c)) - x_c_I*cc - y_c_I*sc - l_cam_x;
     x_LAR*sin(wrap(th_t-th_c)) + x_c_I*sc - y_c_I*cc - l_cam_y;
    -th_c ];

r_LAR_cam = A*r_t_I + B;
% r_LAR_cam(3) = wrap(r_LAR_cam(3));

end

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