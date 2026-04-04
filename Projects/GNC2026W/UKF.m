% UNSCENTED KALMAN FILTER
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Inputs
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% y       [3x1]: VIS measurements (m, m, rad)
% isValid [1x1]: Measurement flag from VIS
% r_c_I   [3x1]: Inertial pose of chaser spacecraft (m, m, rad)
% dt      [1x1]: Time step (s)
% b       [1x1]: UKF tuning parameter beta
% k       [1x1]: UKF tuning parameter kappa
% a       [1x1]: UKF tuning parameter alpha
% R       [3x3]: Measurement noise covariance
% Q       [6x6]: Process noise covariance
% P0      [6x6]: Initial state covariance
% x0      [6x1]: Initial state vector (m, m, rad, m/s, m/s, rad/s)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Output
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% est [struc]: Structure storing filter outputs

function est = UKF(y, isValid, r_c_I, dt, b, k, a, R, Q, P0, x0)
%% Initialization =========================================================

persistent converge 
persistent x 
persistent P

if isempty(converge)
    converge = 0;
    x = x0;
    P = P0;  % P0 = [1 1 5 1 1 5] for last working
end

est = struct;

n = 6;
lambda = a^2 * (n + k) - n;

% Allocating memory
wi_m     = zeros((2*n+1),1);
wi_c     = zeros((2*n+1),1);
P_minus  = zeros(n,n);
Xi_pre   = zeros(n,(2*n+1));
Fi       = zeros(n,(2*n+1));
x_minus  = zeros(n,1);
Xi_minus = zeros(n,(2*n+1));
h        = zeros(3,(2*n+1));    
y_hat    = zeros(3,1);     
P_xy     = zeros(n,3);
P_yy     = zeros(3,3);

% Additional parameters for measurement model
x_c_I = r_c_I(1); y_c_I = r_c_I(2); th_c = r_c_I(3);
sc = sin(th_c); cc = cos(th_c);
x_LAR   = 0.145;   % LAR offset in target BoF, m
l_cam_x = 0.125;   % m, offset in x from origin of Red, left camera
l_cam_y = 0.03;    % m, offset in y from origin of Red, left camera

% mean and covariance weights (Eq. 4.17f)
for i = 1 : (2*n+1)
    if i == 1
        wi_m(i) = lambda / (n+lambda);
        wi_c(i) = wi_m(i) + 1 - a^2 + b;
    else
        wi_m(i) = 1 / (2 * (n+lambda));
        wi_c(i) = wi_m(i);
    end
end

wrap = @(x) atan2(sin(x), cos(x));


%% Propagation ============================================================
% Sigma points calculation 
S_pre = chol(P)';    % Gives lower triangle
for i = 1:2*n+1 
    if i == 1
        Xi_pre(:,i) = x;
    elseif i > 1 && i <= n+1
        Xi_pre(:,i) = x + sqrt(n + lambda) * S_pre(:,i-1);
    else
        Xi_pre(:,i) = x - sqrt(n + lambda) * S_pre(:,i-n-1);
    end
end

% Sigma points propagation 
for i = 1 : (2*n+1)
    u = Xi_pre(:,i);
    F = [eye(3) eye(3)*dt; zeros(3,3) eye(3)];
    Fi(:,i) = F*u;
end

% Priori state estimate 
for i = 1 : (2*n+1)
    x_minus = x_minus + wi_m(i) * Fi(:,i);
end

% Priori covariance estimate 
for i = 1 : (2*n+1)
    Pi = wi_c(i) * (Fi(:,i) - x_minus) * (Fi(:,i) - x_minus)' + Q;
    P_minus = P_minus + Pi;
end

%% Correction =============================================================
newMeas = measurement_flag(isValid);

% Run the correction step if there are new measurements without frame drops
if isValid ~= 0 && newMeas == 1 
    S_minus = chol(P_minus)';       

    % Sigma points calculation 
    for i = 1:2*n+1 
        if i == 1
            Xi_minus(:,i) = x_minus;
        elseif i > 1 && i <= n+1
            Xi_minus(:,i) = x_minus + sqrt(n + lambda) * S_minus(:,i-1);
        else
            Xi_minus(:,i) = x_minus - sqrt(n + lambda) * S_minus(:,i-n-1);
        end
    end
    
    % Predicted measurement calculation 
    for i = 1 : (2*n+1)
        % Measurement model
        A = [cc sc 0 0 0 0;
            -sc cc 0 0 0 0;
             0  0  1 0 0 0];
    
        B = [x_LAR*cos(Xi_minus(3,i)-th_c) - x_c_I*cc - y_c_I*sc - l_cam_x;
             x_LAR*sin(Xi_minus(3,i)-th_c) + x_c_I*sc - y_c_I*cc - l_cam_y;
            -th_c ];
    
        h(:,i) = A*Xi_minus(:,i) + B;
    
        y_hat = y_hat + wi_m(i) * h(:,i);
    end
    
    % Residual
    r = wrap(y - y_hat);
    
    % norm(r) = 0.05 works, DO NOT CHANGE (experimentally validated)
    if norm(r) < 0.05 
        converge = 1;
    end
    
    % Estimated covariance calculation
    for i = 1 : (2*n+1)
        P_yy = P_yy + wi_c(i) * (h(:,i)-y_hat) * (h(:,i)-y_hat)' + R;
        P_xy = P_xy + wi_c(i) * (Xi_minus(:,i) - x_minus) * (h(:,i)-y_hat)';
    end
    
    % NIS calculation
    NIS = r' * inv(P_yy) * r;
    
    % Posteriori state estimate and covariance 
    K = P_xy * inv(P_yy);
    
    P_est = P_minus - K * P_yy * K';
    x_est = x_minus + K * r;
    x_est(3) = wrap(x_est(3));
    
    % Mahalanobis distance
    dM          = sqrt(NIS);
    isOutlier   = dM > chi2inv(97, dM);
    % isOutlier   = dM > 10;

    if isOutlier == 1
        P_est = P_minus;
        x_est= x_minus;
    end
else
    r   = zeros(3,1);
    NIS = 0;
    dM  = 0;
    x_est = x_minus;
    P_est = P_minus;
end

%% Updating memory

est.x = x_est;
est.P = P_est;
est.r = r;
est.conf = converge;
est.NIS  = NIS;

x = x_est;
P = P_est;

end

%% New measurement flag
function [flag] = measurement_flag(isValid)

% Initializing
persistent isValid_pre

if isempty(isValid_pre)
    isValid_pre = 0;
end

% Updating flag based on measurements
if isValid ~= 0
    flag = double(isValid-isValid_pre ~= 0);
    isValid_pre = isValid;
else
    flag = 0;
end

end

