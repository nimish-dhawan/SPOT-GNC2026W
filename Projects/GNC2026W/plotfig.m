%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% NIMISH DHAWAN
% plotfig
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clc
close all


simFileName = 'UKF_201025_1_EXP';
LOC = 'C:\Users\nimis\Documents\SPOT-NimishDhawan\Projects\GitHubDemonstration\Saved Data\';
filename = [LOC, simFileName, '\', 'UKF_201025_1_EXP_1.mat'];

dat = load(filename);

%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Plotting Data
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

figure
plot(dat.dataClass_rt.BLACK_Px_Filtered_m, 'linewidth', 1.2, Color = 'r')
hold on
plot(dat.dataClass_rt.BLACK_Py_Filtered_m, 'linewidth', 1.2, Color = 'b')
plot(dat.dataClass_rt.BLACK_Rz_Filtered_rad, 'linewidth', 1.2, Color = 'g')
plot(simOut.dataPacket.BLACK_Px_Filtered_m, ':r', 'linewidth', 1.2)
plot(simOut.dataPacket.BLACK_Py_Filtered_m, ':b', 'linewidth', 1.2)
plot(simOut.dataPacket.BLACK_Rz_Filtered_rad,':g', 'linewidth', 1.2)
ylabel('Target Pose')
xlim([min(simOut.dataPacket.Time_s), max(simOut.dataPacket.Time_s)])
title('Filtered Pose of Target')
legend('x_{exp} (m)', 'y_{exp} (m)', '\theta_{exp} (rad)', ...
    'x_{sim} (m)', 'y_{sim} (m)', '\theta_{sim} (rad)',Location='northwest')

%%

figure
subplot(2,2,1)
plot(simOut.dataPacket.Separation_m, 'linewidth', 1, Color = 'k')
hold on 
plot(simOut.dataPacket.Desired_Separation_m, '-.k', 'linewidth', 1)
ylabel('L_0 (m)', Interpreter='tex')
xlim([min(simOut.dataPacket.Time_s), max(simOut.dataPacket.Time_s)])
legend('Actual Separation', 'Desired Separation')
title('Standoff Separation')

subplot(2,2,2)
plot(simOut.dataPacket.RED_Rz_rad, 'linewidth', 1, Color = 'r')
hold on
plot(simOut.dataPacket.BLACK_Rz_rad, 'linewidth', 1, Color = 'k')
ylabel('\theta (rad)',Interpreter='tex')
xlim([min(simOut.dataPacket.Time_s), max(simOut.dataPacket.Time_s)])
legend('Chaser', 'Target')
title('Angular Positions of Chaser and Target')

subplot(2,2,3)
plot(simOut.dataPacket.BLACK_Px_CV_m, 'linewidth', 1, Color = 'r')
hold on
plot(simOut.dataPacket.BLACK_Py_CV_m, 'linewidth', 1, Color = 'b')
ylabel('Target Pose')
xlim([min(simOut.dataPacket.Time_s), max(simOut.dataPacket.Time_s)])
plot(simOut.dataPacket.BLACK_Rz_CV_rad, 'linewidth', 1, Color = 'g')
title('Computer Vision Pose Estimation of Target')
legend('x (m)', 'y (m)', '\theta (rad)', Location='northwest')

% subplot(2,2,3)
% plot(simOut.dataPacket.BLACK_Px_m, 'linewidth', 1, Color = 'r')
% hold on
% plot(simOut.dataPacket.BLACK_Py_m, 'linewidth', 1, Color = 'b')
% ylabel('Target Pose')
% xlim([min(simOut.dataPacket.Time_s), max(simOut.dataPacket.Time_s)])
% plot(simOut.dataPacket.BLACK_Rz_rad, 'linewidth', 1, Color = 'g')
% title('Phase Space Data for Target Pose')
% legend('x (m)', 'y (m)', '\theta (rad)', Location='northwest')

subplot(2,2,4)
plot(simOut.dataPacket.BLACK_Px_Filtered_m, 'linewidth', 1.2, Color = 'r')
hold on
plot(simOut.dataPacket.BLACK_Py_Filtered_m, 'linewidth', 1.2, Color = 'b')
ylabel('Target Pose')
xlim([min(simOut.dataPacket.Time_s), max(simOut.dataPacket.Time_s)])
plot(simOut.dataPacket.BLACK_Rz_Filtered_rad, 'linewidth', 1.2, Color = 'g')
title('Filtered Pose of Target')
legend('x (m)', 'y (m)', '\theta (rad)',Location='northwest')