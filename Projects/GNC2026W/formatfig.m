%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Nimish Dhawan
% 6th January 2026
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% =========================================================================
% Description:
% =========================================================================
% Resizes the current figure to match the desired scale. To make consistent
% subfigures, the width scaling factors of the two subfigures must sum to 
% 0.9 or less, AND the height scaling factor for ALL figures must be equal.
% Provide the linewidth in inches if it is known. The default linewidth is 
% 612 points. For consistency, use this defined width scale in LaTeX:
% \includegraphics[width=width\linewidth]{...} 
% =========================================================================
% Examples:
% =========================================================================
% Use after plot() and figure() function:
% Ex.1 --------------------------------------------------------------------
% figure()
% plot(...)
% formatfig() -> uses default width, height and linewidth
% Ex.2 --------------------------------------------------------------------
% figure()
% plot(...)
% formatfig(0.4) -> uses default height and linewidth
% Ex.3 --------------------------------------------------------------------
% figure()
% plot(...)
% formatfig(0.4,0.6) -> uses default linewidth

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Input(s)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% width     : width scaling factor
% height    : height scaling factor
% linewidth : linewidth of the page in inches

function formatfig(width, height, linewidth)

% Location of the figure on screen from left bottom 
location = [100,100];

if nargin < 1 || isempty(width)
    width = 0.8;
end

if nargin < 2 || isempty(height)
    height = 0.8;
end

if nargin < 3 || isempty(linenwidth)
    linewidth = 612;
end

scale = [width*linewidth, height*linewidth];

set(gcf, 'Units', 'points', 'Position', [location, scale])

end