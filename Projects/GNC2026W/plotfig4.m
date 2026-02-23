clc
close all

% --- Load sep error data ---
simFileName1 = 'sep_distance_plot3';
LOC = 'C:\Users\chris\OneDrive\Documents\SPOT-GNC2026W\Projects\GNC2026W\Saved Data\';
dat1 = load([LOC, simFileName1, '\', 'dataPacket_SIM.mat']);

tsT = simOut.dataPacket.Time_s;
t = tsT.Time(:);

sep = dat1.dataClass.sep_difference;
if isa(sep,'timeseries'), sep = sep.Data; end
sep = sep(:);

% --- Load flag data ---
simFileName2 = 'sep_distance_plot4';
dat2 = load([LOC, simFileName2, '\', 'dataPacket_SIM.mat']);

flag = dat2.dataClass.binary_sep_difference;
if isa(flag,'timeseries'), flag = flag.Data; end
flag = flag(:);

% --- Match lengths + crop window ---
n = min([numel(t), numel(sep), numel(flag)]);
t = t(1:n); sep = sep(1:n); flag = flag(1:n);

idx = (t >= 65) & (t <= 235);

% --- Create combined figure (WIDER + SHORTER to avoid "boxy" tiles) ---
fig = figure;
set(fig,'Units','inches','Position',[1 1 7.2 2.5], ...   % <-- changed
        'PaperPositionMode','auto');

tl = tiledlayout(fig,1,2,'TileSpacing','compact','Padding','compact');

% (a) Separation error
ax1 = nexttile(tl,1);
plot(ax1, t(idx), sep(idx), 'LineWidth',1.2, 'Color','k');
grid(ax1,'on');
xlabel(ax1,'Time (seconds)');
ylabel(ax1,'Separation Error (m)');                 % <-- shorter label
title(ax1,'Separation Distance Error');
xlim(ax1,[65 235]);

% Tighten plot margins inside tile
set(ax1,'LooseInset',max(get(ax1,'TightInset'), 0.02))

% inset (smaller + better placement for the new aspect ratio)
axInset = axes(fig,'Position',[0.255 0.57 0.18 0.28]);
box(axInset,'on'); hold(axInset,'on');
plot(axInset, t(idx), sep(idx), 'k','LineWidth',1.0);
yline(axInset,0.03,'--r','LineWidth',1);
xlim(axInset,[100 235]);
ylim(axInset,[-0.05 0.05]);
grid(axInset,'on');

% (b) Flag
ax2 = nexttile(tl,2);
stairs(ax2, t(idx), flag(idx), 'LineWidth',1.2, 'Color','k');
grid(ax2,'on');
xlabel(ax2,'Time (seconds)');
ylabel(ax2,'Binary Output');                         % <-- shorter label
title(ax2,'Capture Authorization Flag');
xlim(ax2,[65 235]);
ylim(ax2,[0 1.1]);
yticks(ax2,[0 1]);

set(ax2,'LooseInset',max(get(ax2,'TightInset'), 0.02))

% --- Fonts (slightly smaller for 2-panel figure, still readable) ---
set([ax1 ax2],'FontName','Times New Roman','FontSize',11);   % <-- changed
set(axInset,'FontName','Times New Roman','FontSize',8);      % <-- changed
set(findall(fig,'-property','FontName'),'FontName','Times New Roman');

% --- Export single PDF ---
exportgraphics(fig,'capture_auth_pair.pdf','ContentType','vector','Resolution',300);