% Nimish
% This script is to make trajectory plots for multiple trials

clc
close all

% Initializing data structure


% Loading the datafile
totalfiles = 3;
data = cell(totalfiles,1);

for kl = 1:totalfiles
    [file,location] = uigetfile;
    filename = [location, file];
    if isequal(file,0)
        return
    else
        data{kl} = load(filename);
        fprintf('Dataset #%d loaded successfully. \n',kl);
    end
end

%%
% Defining data structures
dat1 = data{1};
dat2 = data{2};
dat3 = data{3};

%%
t = dat1.dataClass_rt.Time_s.Data;

% =========================================================================
% Trajectory plots (Courtney's code, with LAR added)
% =========================================================================
% Resizing the plot is not recommended. For any plots to add besides this
% plot, 0.4 width scale is recommended.
[time,inds,~] = unique(t);

DATA_STARTTIME = 1100;          

unique_time = time(DATA_STARTTIME:end);
unique_inds = inds(DATA_STARTTIME:end);

% Extracting experiment 1 data
expdata1_RED_pos_x      = dat1.dataClass_rt.RED_Px_m.Data(unique_inds);
expdata1_RED_pos_y      = dat1.dataClass_rt.RED_Py_m.Data(unique_inds);
expdata1_RED_pos_th     = dat1.dataClass_rt.RED_Rz_rad.Data(unique_inds);
expdata1_BLACK_pos_x    = dat1.dataClass_rt.BLACK_Px_m.Data(unique_inds);
expdata1_BLACK_pos_y    = dat1.dataClass_rt.BLACK_Py_m.Data(unique_inds);
expdata1_BLACK_pos_th   = dat1.dataClass_rt.BLACK_Rz_rad.Data(unique_inds);

% Extracting experiment 2 data
expdata2_RED_pos_x      = dat2.dataClass_rt.RED_Px_m.Data(unique_inds);
expdata2_RED_pos_y      = dat2.dataClass_rt.RED_Py_m.Data(unique_inds);
expdata2_RED_pos_th     = dat2.dataClass_rt.RED_Rz_rad.Data(unique_inds);
expdata2_BLACK_pos_x    = dat2.dataClass_rt.BLACK_Px_m.Data(unique_inds);
expdata2_BLACK_pos_y    = dat2.dataClass_rt.BLACK_Py_m.Data(unique_inds);
expdata2_BLACK_pos_th   = dat2.dataClass_rt.BLACK_Rz_rad.Data(unique_inds);

% Extracting experiment 3 data
expdata3_RED_pos_x      = dat3.dataClass_rt.RED_Px_m.Data(unique_inds);
expdata3_RED_pos_y      = dat3.dataClass_rt.RED_Py_m.Data(unique_inds);
expdata3_RED_pos_th     = dat3.dataClass_rt.RED_Rz_rad.Data(unique_inds);
expdata3_BLACK_pos_x    = dat3.dataClass_rt.BLACK_Px_m.Data(unique_inds);
expdata3_BLACK_pos_y    = dat3.dataClass_rt.BLACK_Py_m.Data(unique_inds);
expdata3_BLACK_pos_th   = dat3.dataClass_rt.BLACK_Rz_rad.Data(unique_inds);

% Static plot 
figure('Name','Trajectory (Multiple Trials)')

% User can specify indices to show snapshots of the platforms. Typically, 
% these would be the initial and final conditions, but can also include 
% intermediate snapshots
plotting_indices1 = [1, 100, 150, 200, 250, 300, 1100, 1150, 1200, 1250, 3200, 3250, 3300];  
alpha_values1     = [0.2*ones(1,length(plotting_indices1)-1) 1];    % transparency for each snapshot; must be same length as 'plotting_indices'

plotting_indices2 = [3300]; 
alpha_values2     = [1];    % transparency for each snapshot; must be same length as 'plotting_indices'

% Plotting trajectory
exphdl1 = plot(expdata1_RED_pos_x(1:plotting_indices1(end)),expdata1_RED_pos_y(1:plotting_indices1(end)), 'r','Linewidth',1,'DisplayName','Trial 1');
hold on
exphdl2 = plot(expdata2_RED_pos_x(1:plotting_indices1(end)),expdata2_RED_pos_y(1:plotting_indices1(end)), 'r','Linewidth',1,'LineStyle','--','DisplayName','Trial 2');
exphdl3 = plot(expdata3_RED_pos_x(1:plotting_indices1(end)),expdata3_RED_pos_y(1:plotting_indices1(end)), 'r','Linewidth',1,'LineStyle',':','DisplayName','Trial 3');

plot(expdata1_BLACK_pos_x(1:plotting_indices1(end)),expdata1_BLACK_pos_y(1:plotting_indices1(end)), 'k','Linewidth',1)
plot(expdata2_BLACK_pos_x(1:plotting_indices1(end)),expdata2_BLACK_pos_y(1:plotting_indices1(end)), 'k','Linewidth',1)
plot(expdata3_BLACK_pos_x(1:plotting_indices1(end)),expdata3_BLACK_pos_y(1:plotting_indices1(end)), 'k','Linewidth',1)

% Plotting remaining two trials
for ik = 1:length(plotting_indices2)
    frame = plotting_indices2(ik);
    alpha = alpha_values2(ik);

    spacecraft = DrawSpacecraft([expdata2_RED_pos_x(frame),expdata2_RED_pos_y(frame),expdata2_RED_pos_th(frame),3]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',alpha,'Linewidth',0.5)

    spacecraft = DrawSpacecraft([expdata3_RED_pos_x(frame),expdata3_RED_pos_y(frame),expdata3_RED_pos_th(frame),3]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',alpha,'Linewidth',0.5)

    spacecraft = DrawSpacecraft([expdata2_BLACK_pos_x(frame),expdata2_BLACK_pos_y(frame),expdata2_BLACK_pos_th(frame),7]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',alpha,'Linewidth',0.5)

    spacecraft = DrawSpacecraft([expdata3_BLACK_pos_x(frame),expdata3_BLACK_pos_y(frame),expdata3_BLACK_pos_th(frame),7]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',alpha,'Linewidth',0.5)

end

% Plotting spacecraft shapes
for ii = 1:length(plotting_indices1)
    frame = plotting_indices1(ii);
    alpha = alpha_values1(ii);

    spacecraft = DrawSpacecraft([expdata1_RED_pos_x(frame),expdata1_RED_pos_y(frame),expdata1_RED_pos_th(frame),3]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'r', 'edgealpha',alpha,'Linewidth',0.5)

    spacecraft = DrawSpacecraft([expdata1_BLACK_pos_x(frame),expdata1_BLACK_pos_y(frame),expdata1_BLACK_pos_th(frame),7]);
    patch(spacecraft(:,1), spacecraft(:,2), 'w', 'facealpha', 0.5, 'edgecolor', 'k', 'edgealpha',alpha,'Linewidth',0.5)

end

xlabel('X-Position [m]')
ylabel('Y-Position [m]')
grid on
box on
axis equal
xlim([0 3.5])
ylim([0 2.4])
legend([exphdl1,exphdl2,exphdl3], 'Location', 'NorthWest')
formatfig(0.7,0.4)
ax = gca();
ax.FontSize = 10;
ax.FontName = "Times New Roman";


%%
% Saving the plot

savedplotsfolder = [location, 'Saved Plots\'];
if ~exist(savedplotsfolder, 'dir')
    mkdir(savedplotsfolder);
end

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