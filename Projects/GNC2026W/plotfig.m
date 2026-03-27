%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% NIMISH DHAWAN
% plotfig
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% clc
close all


% Loading the datafile
[file,location] = uigetfile;

if isempty(file) || strcmp(file,"")
    return
else
    filename = [location, file];
    dat = load(filename);
end

%%
% Toggle on/off saving all the plots automatically
savefigs = 0;
% Toggle on/off animation
anim = 1;
% Time frame for plotting
t = dat.dataClass_rt.Time_s.Data;
% For successful experiment : period = [t(1100), t(4700)];
period = [t(1185), t(end)];
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
% Target pose estimates and ground truth
% =========================================================================
figure('Name','Target Pose Estimates and Ground Truth')
subplot(3,2,1)
plot(t,dat.dataClass_rt.BLACK_Px_Filtered_m.Data,'k')
hold on
plot(t,dat.dataClass_rt.BLACK_Px_m.Data,'--r')
grid on;
ylabel('x [m]')
xlim(period)
legend('Estimates', 'Ground Truth', 'Location','Best')
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,2,3)
plot(t,dat.dataClass_rt.BLACK_Py_Filtered_m.Data,'k')
hold on
plot(t,dat.dataClass_rt.BLACK_Py_m.Data,'--r')
grid on;
ylabel("y [m]")
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,2,5)
plot(t,wrap(dat.dataClass_rt.BLACK_Rz_Filtered_rad.Data),'k')
hold on
plot(t,dat.dataClass_rt.BLACK_Rz_rad.Data,'--r')
grid on;
ylabel('\theta_Z [rad]')
xlabel('Time [s]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

dx  = dat.dataClass_rt.BLACK_Px_m.Data...
      - dat.dataClass_rt.BLACK_Px_Filtered_m.Data;
dy  = dat.dataClass_rt.BLACK_Py_m.Data ...
      - dat.dataClass_rt.BLACK_Py_Filtered_m.Data;
dth = wrap(dat.dataClass_rt.BLACK_Rz_rad.Data ...
      - dat.dataClass_rt.BLACK_Rz_Filtered_rad.Data );

subplot(3,2,2)
plot(t,dx,'k')
grid on;
ylabel('\deltax [m]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,2,4)
plot(t,dy,'k')
grid on;
ylabel('\deltay [m]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,2,6)
plot(t,dth,'k')
grid on;
ylabel('\delta\theta [rad]'); xlabel('Time [s]')
xlim(period)
formatfig(0.8,0.4);
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% Filter Performance
% =========================================================================
% For 3x1 plots, 0.4x0.4 size is recommended for placing next to trajectory
% plot
dx  = dat.dataClass_rt.BLACK_Px_m.Data...
      - dat.dataClass_rt.BLACK_Px_Filtered_m.Data;
dy  = dat.dataClass_rt.BLACK_Py_m.Data ...
      - dat.dataClass_rt.BLACK_Py_Filtered_m.Data;
dth = wrap(dat.dataClass_rt.BLACK_Rz_rad.Data ...
      - dat.dataClass_rt.BLACK_Rz_Filtered_rad.Data );

figure('Name','Filter Performance')
subplot(3,1,1)
plot(t,dx,'k')
grid on;
ylabel('\deltax [m]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,2)
plot(t,dy,'k')
grid on;
ylabel('\deltay [m]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,3)
plot(t,dth,'k')
grid on;
ylabel('\delta\theta [rad]'); xlabel('Time [s]')
xlim(period)
formatfig(0.4,0.4);
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% Controller effort
% =========================================================================
% For 3x1 plots, 0.4x0.4 size is recommended for placing next to trajectory
% plot
figure('Name','Controller effort')
subplot(3,1,1)
plot(t,dat.dataClass_rt.RED_Fx_Sat_N.Data,'k')
grid on;
ylabel('F_x [N]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,2)
plot(t,dat.dataClass_rt.RED_Fy_Sat_N.Data,'k')
grid on;
ylabel('F_y [N]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,3)
plot(t,dat.dataClass_rt.RED_Tz_Sat_Nm.Data,'k')
grid on;
ylabel('\tau_z [N.m]'); xlabel('Time [s]')
xlim(period)
formatfig(0.4,0.4);
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% LOS Angle
% =========================================================================
% For 3x1 plots, 0.4x0.4 size is recommended for placing next to trajectory

figure('Name','LOS Angle')
subplot(3,1,1)
plot(t,dat.dataClass_rt.lambda_rad.Data,'k')
grid on;
ylabel('\lambda [rad]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,2)
plot(t,dat.dataClass_rt.lambdaDot_radpers.Data,'k')
grid on;
ylabel("$\dot{\lambda}$ [rad/s]","Interpreter","latex")
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,3)
plot(t,dat.dataClass_rt.lambdaDdot_radpers2.Data,'k')
grid on;
ylabel('$\ddot{\lambda}$ [rad/s$^{2}$]', 'Interpreter', 'latex')
xlabel('Time [s]')
xlim(period)
formatfig(0.4,0.4);
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% Controller error
% =========================================================================
% For 3x1 plots, 0.4x0.4 size is recommended for placing next to trajectory
% plot

dx  = dat.dataClass_rt.RED_Px_m.Data...
      - dat.dataClass_rt.RED_Px_Desired_m.Data;
dy  = dat.dataClass_rt.RED_Py_m.Data ...
      - dat.dataClass_rt.RED_Py_Desired_m.Data;
dth = wrap(dat.dataClass_rt.RED_Rz_rad.Data ...
      - dat.dataClass_rt.RED_Rz_Desired_rad.Data );

figure('Name','Controller Error')
subplot(3,2,1)
plot(t,dat.dataClass_rt.error_Px_m.Data,'k')
grid on;
ylabel('\deltax [m]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,2,3)
plot(t,dat.dataClass_rt.error_Py_m.Data,'k')
grid on;
ylabel('\deltay [m]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,2,5)
plot(t,dat.dataClass_rt.error_Rz_rad.Data,'k')
grid on;
ylabel('\delta\theta [rad]'); xlabel('Time [s]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

subplot(3,2,[2 6])
plot(t, dat.dataClass_rt.Separation_m.Data, 'k')
hold on; grid on;
plot(t, dat.dataClass_rt.Desired_Separation_m.Data, '--k')
xlabel('Time [s]'); ylabel('Separation [m]');
xlim(period)
legend('Actual', 'Desired')
formatfig(0.8,0.4)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% Plotting VIS LAR States
% =========================================================================
% For 3x1 plots, 0.4x0.4 size is recommended for placing next to trajectory
% plot
figure('Name','VIS LAR States')
subplot(3,1,1)
plot(t,dat.dataClass_rt.VIS_LAR_States_Px_mm.Data,'k')
grid on;
ylabel('x_{LAR} [mm]')
xlim(period)
ax = gca();
% annotation('textbox', ...
%     [0.45 0.79 0.26 0.12], ...
%     'String','LAR outside camera FOV', ...
%     'FontName','Times New Roman', ...
%     'FitBoxToText','off', ...
%     'BackgroundColor',[1 1 1]);
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,2)
plot(t,dat.dataClass_rt.VIS_LAR_States_Py_mm.Data,'k')
grid on;
ylabel('y_{LAR} [mm]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,3)
plot(t,dat.dataClass_rt.VIS_LAR_States_Rz_rad.Data,'k')
grid on;
ylabel('\theta_{LAR} [rad]')
xlabel('Time [s]')
xlim(period)
formatfig(0.4,0.4);
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% Plotting separation
% =========================================================================
figure('Name', 'Separation Distance')
plot(t, dat.dataClass_rt.Separation_m.Data, 'k')
hold on; grid on;
plot(t, dat.dataClass_rt.Desired_Separation_m.Data, '--k')
xlabel('Time [s]'); ylabel('Separation [m]');
xlim(period)
legend('Actual', 'Desired')
formatfig(0.45,0.2)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% =========================================================================
% Ground Truth vs. VIS Measurements
% =========================================================================
r_LAR_cam_truth = zeros(length(t),3);
r_T_I = [dat.dataClass_rt.BLACK_Px_m.Data, dat.dataClass_rt.BLACK_Py_m.Data, dat.dataClass_rt.BLACK_Rz_rad.Data];
r_C_I = [dat.dataClass_rt.RED_Px_m.Data, dat.dataClass_rt.RED_Py_m.Data, dat.dataClass_rt.RED_Rz_rad.Data];

for i = 1:length(t) 
    r_LAR_cam_truth(i,:) = inertial2Cam(r_T_I(i,:)', r_C_I(i,:)');
end

figure('Name','VIS LAR States vs. Ground Truth')
subplot(3,1,1)
plot(t,dat.dataClass_rt.VIS_LAR_States_Px_mm.Data,'k')
grid on; hold on;
plot(t,r_LAR_cam_truth(:,1),'--r')
ylabel('x_{LAR} [mm]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,2)
plot(t,dat.dataClass_rt.VIS_LAR_States_Py_mm.Data,'k')
grid on; hold on;
plot(t,r_LAR_cam_truth(:,2),'--r')
ylabel('y_{LAR} [mm]')
xlim(period)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(3,1,3)
plot(t,dat.dataClass_rt.VIS_LAR_States_Rz_rad.Data,'k')
grid on; hold on;
plot(t,r_LAR_cam_truth(:,3),'--r')
ylabel('\theta_{LAR} [rad]')
xlabel('Time [s]')
xlim(period)
formatfig(0.4,0.4);
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";



% =========================================================================
% Trajectory plots (Courtney's code, with LAR added)
% =========================================================================
% Resizing the plot is not recommended. For any plots to add besides this
% plot, 0.4 width scale is recommended.
[time,inds,~] = unique(t);

DATA_STARTTIME = 1100;          

unique_time = time(DATA_STARTTIME:end);
unique_inds = inds(DATA_STARTTIME:end);

expdata_RED_pos_x      = dat.dataClass_rt.RED_Px_m.Data(unique_inds);
expdata_RED_pos_y      = dat.dataClass_rt.RED_Py_m.Data(unique_inds);
expdata_RED_pos_th     = dat.dataClass_rt.RED_Rz_rad.Data(unique_inds);
expdata_BLACK_pos_x    = dat.dataClass_rt.BLACK_Px_m.Data(unique_inds);
expdata_BLACK_pos_y    = dat.dataClass_rt.BLACK_Py_m.Data(unique_inds);
expdata_BLACK_pos_th   = dat.dataClass_rt.BLACK_Rz_rad.Data(unique_inds);
expdata_BLUE_pos_x     = dat.dataClass_rt.BLUE_Px_m.Data(unique_inds);
expdata_BLUE_pos_y     = dat.dataClass_rt.BLUE_Py_m.Data(unique_inds);
expdata_BLUE_pos_th    = dat.dataClass_rt.BLUE_Rz_rad.Data(unique_inds);

ARMq1 = dat.dataClass_rt.Joint_q1.Data(unique_inds);
ARMq2 = dat.dataClass_rt.Joint_q2.Data(unique_inds);
ARMq3 = dat.dataClass_rt.Joint_q3.Data(unique_inds);

% Static plot 
figure('Name','Trajectory')

% User can specify indices to show snapshots of the platforms. Typically, 
% these would be the initial and final conditions, but can also include 
% intermediate snapshots
plotting_indices = [1,1836]; 
% plotting_indices = [1, unique_inds(end)]; 
alpha_values     = [0.2, 1];
% alpha_values     = [0.2*ones(1,length(plotting_indices)-1) 1];    % transparency for each snapshot; must be same length as 'plotting_indices'

% Plotting trajectory
exphdl = plot(expdata_RED_pos_x(1:plotting_indices(end)),expdata_RED_pos_y(1:plotting_indices(end)), 'r','Linewidth',1,'DisplayName','Trial');
hold on
plot(expdata_BLACK_pos_x(1:plotting_indices(end)),expdata_BLACK_pos_y(1:plotting_indices(end)), 'k','Linewidth',1)
plot(expdata_BLUE_pos_x(1:plotting_indices(end)),expdata_BLUE_pos_y(1:plotting_indices(end)), 'b','Linewidth',1)

% Plotting spacecraft shapes
for ii = 1:length(plotting_indices)
    frame = plotting_indices(ii);
    alpha = alpha_values(ii);

    spacecraft = DrawSpacecraft([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),3]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',alpha,'Linewidth',0.5)

    [shoulder,elbow,wrist] = DrawARM([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),ARMq1(frame),ARMq2(frame),ARMq3(frame)]);
    patch(shoulder(:,1), shoulder(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
    patch(elbow(:,1), elbow(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
    patch(wrist(:,1), wrist(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)

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
legend(exphdl, 'Location', 'NorthWest')
formatfig(0.7,0.4)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

% Angular Velocity
figure('Name', 'Angular Velocity')
plot(t, dat.dataClass_rt.BLACK_RzD_radpers.Data, 'k')
hold on; grid on;
plot(t, dat.dataClass_rt.RED_RzD_radpers.Data, 'r')
xlabel('Time [s]'); ylabel('$\dot{\theta}$ [rad/s]', 'Interpreter', 'latex');
xlim(period);
legend('Target', 'Chaser')
formatfig(0.45,0.2)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";

%%
% =========================================================================
% Trajectory animation (Courtney's code, with LAR added)
% =========================================================================

if anim == 1 % Trajectory animation
    stepsize = 10; % This controls how many frames of data are plotted
    
    fig = figure();
    set(gcf,'color','w')
    
    counter = 1;
    for frame = 1 : stepsize : length(unique_time)
    
        % Plotting trajectory
        exphdl = plot(expdata_RED_pos_x(1:frame),expdata_RED_pos_y(1:frame), 'r-','Linewidth',1,'DisplayName','Trial');
        hold on
        plot(expdata_BLACK_pos_x(1:frame),expdata_BLACK_pos_y(1:frame), 'k-','Linewidth',1)
        
        % Plotting spacecraft shapes

        spacecraft = DrawSpacecraft([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),3]);
        patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',1,'Linewidth',0.5)
        [shoulder,elbow,wrist] = DrawARM([expdata_RED_pos_x(frame),expdata_RED_pos_y(frame),expdata_RED_pos_th(frame),ARMq1(frame),ARMq2(frame),ARMq3(frame)]);
        patch(shoulder(:,1), shoulder(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(elbow(:,1), elbow(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
        patch(wrist(:,1), wrist(:,2), 'w', 'facealpha', alpha, 'edgecolor', 'r', 'edgealpha',alpha)
    
        spacecraft = DrawSpacecraft([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame),7]);
        patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',1,'Linewidth',0.5)

        cone = DrawPositionCone([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame)]);
        patch(cone(:,1), cone(:,2), 'k', 'facealpha', 0.05, 'edgecolor', 'k', 'edgealpha', 0.7, 'Linewidth',0.5)
    
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

% Saving all open figures as plots
if savefigs == 1
    figs = findall(groot, 'Type', 'figure');
    
    for k = 1:numel(figs)
        try
            fig = figs(k);
            name = get(fig, 'Name');
            exportgraphics(fig,[savedplotsfolder, name, '.pdf'])
        catch ME
            uialert(fig, ['Cannot save the following figure:', name],...
                    'Error saving plots', 'Modal', true);
        end
    end
end

%%
function r_LAR_cam = inertial2Cam(r_t_I, r_c_I)

wrap = @(x) atan2(sin(x), cos(x));

th_t = r_t_I(3); th_c = r_c_I(3);
x_c_I = r_c_I(1); y_c_I = r_c_I(2);
sc = sin(th_c); cc = cos(th_c);

x_LAR   = 0.145;   % LAR offset in target BoF, m
l_cam_x = 0.125;   % Offset in x from origin of Red, left camera, m
l_cam_y = 0.03;    % )ffset in y from origin of Red, left camera, m

A = [ cc sc 0;
     -sc cc 0;
      0  0  1];

B = [x_LAR*cos(th_t-th_c) - x_c_I*cc - y_c_I*sc - l_cam_x;
     x_LAR*sin(th_t-th_c) + x_c_I*sc - y_c_I*cc - l_cam_y;
    -th_c ];

r_LAR_cam = A*r_t_I + B;
% r_LAR_cam(3) = wrap(r_LAR_cam(3));

end