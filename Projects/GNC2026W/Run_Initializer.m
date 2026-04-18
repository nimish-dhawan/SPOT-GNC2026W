% The following script is the initializer for SPOT 4.1; in this script,
% users define all initials parameters and/or constants required for
% simulation and experiment.

% Nimish

clear;
clc;
close all force;

warning('off','all')

%% Start the graphical user interface or set the appropriate variables:

% No matter what, the GUI needs to be loaded
appHandle = GUI_v4_1_Main;

%% Place any custom variables or overwriting variables in this section

% As an example, here are the control parameters the manipulator.
% Set torque limits on joints

Tz_lim_sharm                   = .1; % Shoulder Joint [Nm]

Tz_lim_elarm                   = .1; % Elbow Joint [Nm]

Tz_lim_wrarm                   = .1; % Wrist Joint [Nm]

% Transpose Jacobian controller gains:

Kp = [0.08 0 0
      0    0.08 0
      0    0    0.002];
Kv = [0.05 0 0
      0    0.05 0
      0    0    0.005];

% Initialize the PID gains for the ARM:

Kp_sharm                       = 1.5;
Kd_sharm                       = 1.0;

Kp_elarm                       = 1.2;
Kd_elarm                       = 0.8;

Kp_wrarm                       = 1.0;
Kd_wrarm                       = 0.6;

% Define the model properties for the joint friction:
% Based on https://ieeexplore.ieee.org/document/1511048

%Shoulder
Gamma1_sh = 0.005; 
Gamma2_sh = 5;
Gamma3_sh = 40;
Gamma4_sh = 0.015; 
Gamma5_sh = 800; 
Gamma6_sh = 0.005;

%Elbow
Gamma1_el = 0.12; 
Gamma2_el = 5;
Gamma3_el = 10;
Gamma4_el = 0.039; 
Gamma5_el = 800;
Gamma6_el = 0.000001;

%Wrist
Gamma1_wr = 0.025;
Gamma2_wr = 5;
Gamma3_wr = 40;
Gamma4_wr = 0.029;
Gamma5_wr = 800; 
Gamma6_wr = 0.02;

%% UKE Setup ==============================================================
% Chaser properties
M_c = diag([mRED, mRED, IRED]);
Mc_inv = inv(M_c);
A_c = eye(3);
F_u = zeros(3,1); % No external forces/torques

% Gains
a1 = 2;
a2 = 2;
a3 = 2;
alpha = diag([a1; a2; a3]);

g1 = 1e-01;
g2 = 1e-01;
g3 = 5e-01;
gamma = diag([g1; g2; g3]);

%% Experiment scenario ====================================================
% scenario = 1 for rotational + translation 1
% scenario = 2 for rotational + translation 2
% scenario = 3 for rotation only
scenario  = 1;

if scenario == 1
    % Scenario 1
    X0_blk = 0.60; % [m]
    Y0_blk = 0.65; % [m]
    Z0_blk = -45;  % [deg]
    X0_red = 3.0;  % [m]
    Y0_red = 1.50; % [m]
    Z0_red = 180;  % [deg]
elseif scenario == 2
    % Scenario 2
    X0_blk = 1.00; % [m]
    Y0_blk = 1.77; % [m]
    Z0_blk = -180; % [deg]
    X0_red = 0.40; % [m]
    Y0_red = 0.40; % [m]
    Z0_red = 45.0; % [deg]
elseif scenario == 3
    % Scenario 3
    X0_blk = 1.76; % [m]
    Y0_blk = 1.21; % [m]
    Z0_blk = 0.00; % [deg]
    X0_red = 3.00; % [m]
    Y0_red = 2.00; % [m]
    Z0_red = 225;  % [deg]
else
    warning("Selected scenario does not exist. Please choose a defined scenario.");
end

% Updating initial conditions in GUI
appHandle.SubAppInitialConditions.REDStartX.Value  = X0_red;  % [m]
appHandle.SubAppInitialConditions.REDStartY.Value  = Y0_red;  % [m]
appHandle.SubAppInitialConditions.REDStartTh.Value = Z0_red;  % [deg]

appHandle.SubAppInitialConditions.BLACKStartX.Value  = X0_blk;
appHandle.SubAppInitialConditions.BLACKStartY.Value  = Y0_blk;
appHandle.SubAppInitialConditions.BLACKStartTh.Value = Z0_blk;

appHandle.SubAppInitialConditions.UpdateInitialConditions();


%% Navigation Initialization ==============================================
% Select what filtering technique to use
% For UKF : fNum = 1
% For MEKF: fNum = 2
% For EKF : fNum = 3
fNum = 1;   

% Unscented transform parameters
a = 1;
b = 2;
k = 5;
dt = baseRate;

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

CVrate = 1/5; % sec

% VISinLoop = 1; for having CV states run in the loop
% VISinLoop = 0; otherwise
VISinLoop = 1;



%% This section of the code contains parameters should not be modified

% Set the PWM frequency
PWMFreq = 5; %[Hz]

%% Custom Draw Functions

% The registerDrawFcn function takes 3 inputs:
%
% 1: A name for the custom drawing to be added (must be unique).
%
% 2: A function handle for a function that returns a set of x and y values 
% that defines the geometry of what is to be drawn. This is defined by you,
% however, the inputs are fixed, and must be data and idx, in that order,
% where data is the dataClass object you typically work with for
% simulation/experiment data, and idx is the index of the current step in
% the data being displayed.
% 
% 3: A function handle for a function that determines how the data is
% drawn, standard functions include plot(), line(), and patch(). Custom
% functions can be made too, as long as they return a patch, line or
% similar graphics object.
%
% 4: A set of options for the type of object to be plotted as a cell array.
% Anything you'd pass as an option to function used as argument 2 will
% work.
%

% Examples
% 
% Example 1: Drawing a line using the line function
function [x,y] = drawLine(data, idx)
    theta = data.RED_Rz_rad.Data(idx);

    r = [0.5; 0];
    R = [cos(theta) -sin(theta);
         sin(theta) cos(theta)];
    r_rot = R*r;

    x = data.RED_Px_m.Data(idx) + [0 r_rot(1)];
    y = data.RED_Py_m.Data(idx) + [0 r_rot(2)];
end

appHandle.registerCustomDrawing("Line", @drawLine, @line, ...
    {'Color', 'red', 'LineStyle', '--'})

% Example 2: Drawing a circle using the patch function
function [x, y] = drawCircle(data, idx)
    t = linspace(0, 2*pi);

    r = 0.5;

    x = data.RED_Px_m.Data(idx) + r*cos(t);
    y = data.RED_Py_m.Data(idx) + r*sin(t);
end

appHandle.registerCustomDrawing("Circle", @drawCircle, @patch, ...
    {'FaceColor', 'red', 'EdgeColor', 'red', 'FaceAlpha', 0.1, 'LineStyle', '--'})

% appHandle.registerCustomDrawing("Cone", @DrawPositionCone, @patch, ...
%     {'FaceColor', 'red', 'EdgeColor', 'red', 'FaceAlpha', 0.1, 'LineStyle', '--'})


function [x,y] = DrawPositionCone(data,idx)  

    cx    = data.BLACK_Px_m.Data(idx);
    cy    = data.BLACK_Py_m.Data(idx);
    theta = data.BLACK_Rz_rad.Data(idx);

    % S/C Measurements;
    r = 0.15; % m

    % LAR Measurements
    LARinnerD = 0.18; % m
    LARouterD = 0.25; % m, not the same as the outermost diameter
    LARdepth  = 0.07; % m

    % Cone lines
    x1 = cx+5;
    x2 = x1;
    y1 = ((LARouterD/2-LARinnerD/2)/LARdepth)*(x1-cx-r) + cy+LARinnerD/2;
    y2 = ((-LARouterD/2+LARinnerD/2)/LARdepth)*(x2-cx-r) + cy-LARinnerD/2;

    % Defining the shape of the cone
    cone = [cx+r, cy+LARinnerD/2;
            x1, y1;
            x2, y2;
            cx+r, cy-LARinnerD/2];
    
    % Mapping cone to the BoF
    conecenter = [ones(1,length(cone))*cx; ones(1,length(cone))*cy].' ;
    coneorigin = cone - conecenter;

    % Defining rotation matrix
    rotmat = [cos(theta), -sin(theta); 
              sin(theta), cos(theta)];
    
    % Rotating the cone origin
    coneorigin_rot = zeros(size(coneorigin));
    for i=1:length(cone)
        coneorigin_rot(i,:) = rotmat*coneorigin(i,:).';
    end
    
    % Transform the spacecraft back to its correct position at cx,cy
    conepose = coneorigin_rot + conecenter;
    x = conepose(:,1);
    y = conepose(:,2);

end

appHandle.registerCustomDrawing("Cone", @DrawPositionCone, @patch, ...
    {'FaceColor','k','FaceAlpha', 0.05, 'EdgeColor', 'k', 'EdgeAlpha', 0.7, 'LineStyle', '--'})

%% For those who want to run simulations without using the GUI:

% % Load previous GUI states using this public facing function
% appHandle.LoadDataPublicFcn(cd,'SampleGUIState.mat');
%
% Set the diagram to run (must be set again after each load)
appHandle.AvailableDiagramsDropDown.Value = "GNC2026W.slx";

% Ensure the diagram is loaded
open(appHandle.AvailableDiagramsDropDown.Value);

% Edit active platforms
appHandle.REDCheckBox.Value    = 1;
appHandle.BLACKCheckBox.Value  = 1;
appHandle.BLUECheckBox.Value   = 0;
appHandle.ARMCheckBox.Value    = 0;

appHandle.ConfirmSettings();

% % Edit initial conditions
% appHandle.SubAppInitialConditions.REDStartX.Value  = X0_red;  % [m]
% appHandle.SubAppInitialConditions.REDStartY.Value  = Y0_red;  % [m]
% appHandle.SubAppInitialConditions.REDStartTh.Value = Z0_red;  % [deg]
% 
% appHandle.SubAppInitialConditions.BLACKStartX.Value  = X0_blk;
% appHandle.SubAppInitialConditions.BLACKStartY.Value  = Y0_blk;
% appHandle.SubAppInitialConditions.BLACKStartTh.Value = Z0_blk;
% 
% appHandle.SubAppInitialConditions.UpdateInitialConditions();
% 
% % Edit mass properties
% appHandle.SubAppMassProperties.OverridePropertiesCheckBox.Value = 1;
% appHandle.SubAppMassProperties.MassRedEditField.Value = 12.035;    % [kg]
% appHandle.SubAppMassProperties.InertiaRedEditField.Value = 0.19854;% [kgm2]
% 
% appHandle.SubAppMassProperties.UpdateMassProperties();
% 
% % Edit phase durations
% appHandle.SubPhase1EditField.Value = 10;       % [s]
% appHandle.SubPhase2EditField.Value = 5;        % [s]
% appHandle.SubPhase3EditField.Value = 28;       % [s]
% appHandle.SubPhase4EditField.Value = 115;      % [s]
% appHandle.DurPhase0EditField.Value = 10;       % [s]
% appHandle.DurPhase1EditField.Value = 5;        % [s]
% appHandle.DurPhase2EditField.Value = 40;       % [s]
% appHandle.DurPhase4EditField.Value = 30;       % [s]
% appHandle.DurPhase5EditField.Value = 20;       % [s] 
% 
% appHandle.UpdateTimes();
% 
% % Execute a simulation
% appHandle.RunSimulationPublicFcn();
% 
% % Manipulate the simulation data
% figure()
% plot(dataClass.Time_s.Data, dataClass.RED_Px_m.Data,'-k')
% grid on
% hold on
% axis tight
% xlabel('Time [s]')
% ylabel('Position - X [m]')

% Edit subphase durations
appHandle.SubPhase1EditField.Value = 0;      % [s]
appHandle.SubPhase2EditField.Value = 360;     % [s]
appHandle.SubPhase3EditField.Value = 0;       % [s]
appHandle.SubPhase4EditField.Value = 0;       % [s]

appHandle.UpdateTimes();

appHandle.OpenInitialConditionAppButton.set('Enable','on');
appHandle.UseVISintheLoopSwitch.Value = 'On';
appHandle.VISlamp.Color = [0 1 0];