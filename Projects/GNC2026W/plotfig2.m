clc
close all

simFileName = 'sep_distance_plot3';
LOC = 'C:\Users\chris\OneDrive\Documents\SPOT-GNC2026W\Projects\GNC2026W\Saved Data\';
filename = [LOC, simFileName, '\', 'dataPacket_SIM.mat'];

dat = load(filename);

% --- Get numeric time vector (timeseries -> numeric) ---
tsT = simOut.dataPacket.Time_s;      % timeseries
t   = tsT.Time(:);                  % numeric column

% --- Grab signal and make sure it is numeric column ---
sep = dat.dataClass.sep_difference;

% If timeseries, extract .Data
if isa(sep,'timeseries')
    sep = sep.Data;
end

sep = sep(:);

% --- Force arrays to same length (prevents out-of-bounds) ---
n = min([numel(t), numel(sep)]);
t   = t(1:n);
sep = sep(1:n);

% --- Crop window ---
idx = (t >= 65) & (t <= 235);

% --- Plot ---
fig = figure;
set(fig,'Units','inches','Position',[1 1 6.5 4])

plot(t(idx), sep(idx), 'LineWidth',1.2, 'Color','k')
axMain = gca;
set(axMain,'Units','normalized','Position',[0.13 0.15 0.80 0.75])

grid on

xlabel('Time (seconds)')
ylabel('Separation Distance Difference (m)')
title('Difference Between Actual and Desired Separation Distance')

xlim([65 235])

% --- Times New Roman everywhere ---
set(gca,'FontName','Times New Roman','FontSize',12)
set(findall(fig,'-property','FontName'),'FontName','Times New Roman')

% --- Add zoomed inset for 3 cm threshold ---
axes('Position',[0.58 0.55 0.30 0.30])   % [left bottom width height]
box on
hold on

plot(t(idx), sep(idx), 'k','LineWidth',1.1)
yline(0.03,'--r','LineWidth',1)
xlim([100 235])      % zoom window (adjust as needed)
ylim([-0.05 0.05])   % zoomed scale around threshold
grid on

set(gca,'FontName','Times New Roman','FontSize',9)