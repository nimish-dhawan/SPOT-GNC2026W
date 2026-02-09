%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% NIMISH DHAWAN
% plotfig
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clc
close all

% Loading the datafile
[file,location] = uigetfile;
filename = [location, file];
dat = load(filename);

%%
% Toggle on/off saving all the plots automatically
savefigs = 0;
% Toggle on/off animation
anim = 1;
% Time frame for plotting
% For successful experiment : period = [t(1100), t(4700)];
period = [t(1), t(end)];
%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Plotting Data
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Make sure you give your figures a name in order to properly save them as 
% pdf files 

wrap = @(x) atan2(sin(x), cos(x));
t = dat.dataClass_rt.Time_s.Data;

% =========================================================================
% Target pose estimates and ground truth
% =========================================================================
figure('Name','Target Pose Estimates and Ground Truth')
subplot(1,2,1)
plot(t,dat.dataClass_rt.BLACK_Px_Filtered_m.Data,'k')
hold on; grid on;
plot(t,dat.dataClass_rt.BLACK_Py_Filtered_m.Data, '--k')
plot(t,dat.dataClass_rt.BLACK_Rz_Filtered_rad.Data, '-.k')
ylabel('Pose'); xlabel('Time [s]')
xlim(period)
legend('x [m]', 'y [m]', '\theta [rad]',Location='northwest')
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";
subplot(1,2,2)
plot(t,dat.dataClass_rt.BLACK_Px_m.Data,'k')
hold on; grid on;
plot(t,dat.dataClass_rt.BLACK_Py_m.Data, '--k')
plot(t,unwrap(dat.dataClass_rt.BLACK_Rz_rad.Data), '-.k')
ylabel('Pose'); xlabel('Time [s]')
xlim(period)
formatfig(1,0.3);
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
ylabel('F_y [mN]')
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

% Static plot 
figure('Name','Trajectory')

% User can specify indices to show snapshots of the platforms. Typically, 
% these would be the initial and final conditions, but can also include 
% intermediate snapshots
plotting_indices = [1, 100, 150, 200, 250, 300, 1100, 1150, 1200, 1250, 3200, 3300, 3400]; 
alpha_values     = [0.2*ones(1,length(plotting_indices)-1) 1];    % transparency for each snapshot; must be same length as 'plotting_indices'

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
    stepsize = 5; % This controls how many frames of data are plotted
    
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
    
        spacecraft = DrawSpacecraft([expdata_BLACK_pos_x(frame),expdata_BLACK_pos_y(frame),expdata_BLACK_pos_th(frame),7]);
        patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',1,'Linewidth',0.5)
    
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
        fig = figs(k);
        name = get(fig, 'Name');
        exportgraphics(fig,[savedplotsfolder, name, '.pdf'])
    end
end
