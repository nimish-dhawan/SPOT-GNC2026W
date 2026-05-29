% This function checks if an SLX file is already open in MATLAB        
function is_open = isSLXOpen(file_name)
    
    % Remove the '.slx'
    file_name = strrep(file_name,".slx","");    
    
    % Get a list of all open models
    open_models = find_system('Type', 'block_diagram');
    
    % Loop through the open models and check if the file path matches
    for i = 1:length(open_models)
        [~, open_filename, ~] = fileparts(get_param(open_models{i}, 'FileName'));
        if strcmp(string(open_filename), file_name)
            % If the file path matches, the file is already open
            is_open = true;
            return;
        end
    end
    
    % If we reach this point, the file is not open
    is_open = false;
    
end