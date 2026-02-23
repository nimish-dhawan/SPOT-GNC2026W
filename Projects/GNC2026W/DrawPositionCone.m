function [conepose] = DrawPositionCone(param)
    cx    = param(1);
    cy    = param(2);
    theta = param(3);

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

end