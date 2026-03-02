%% Load file
simFileName = 'testmeasflag';
LOC = 'C:\Users\chris\OneDrive\Documents\SPOT-GNC2026W\Projects\GNC2026W\Saved Data\';
filename = [LOC, simFileName, '\', 'dataPacket_SIM.mat'];

dat = load(filename);

%% Access dataClass inside the loaded struct
dataClass = dat.dataClass;

%% Extract signals (adjust names if needed)


noisy_x    = dataClass.BLACK_X_Noisy;
noisy_data = noisy_x.Data;
t = noisy_x.Time;
filtered_x = dataClass.BLACK_Px_Filtered_m;
filtered_data = filtered_x.Data;
flag       = dataClass.measflag;
flag_data = flag.Data;

%% Find update indices
update_idx = find(flag_data > 0.5);

%% ----------- Plot -----------
figure;
hold on;
grid on;

plot(t, noisy_data, 'LineWidth', 1.2);
plot(t, filtered_data, 'LineWidth', 1.5);

plot(t(update_idx), filtered_data(update_idx), ...
     'ro', 'MarkerSize', 6, 'LineWidth', 1.5);

legend('Noisy State', 'Filtered State', 'Update Instants');
xlabel('Time (s)');
ylabel('State Value');
title('Measurement Update Timing Verification');

%% Zoom into ~0.6 seconds around 5th update
if length(update_idx) > 5
    xlim([t(update_idx(5)) t(update_idx(5)) + 0.6]);
end