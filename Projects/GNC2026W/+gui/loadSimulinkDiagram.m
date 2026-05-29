function [] = loadSimulinkDiagram(app)
    FileName = app.AvailableDiagramsDropDown.Value;
    open(FileName);
    is_open = app.isSLXOpen(app.AvailableDiagramsDropDown.Value);
    while is_open == 0
        is_open = app.isSLXOpen(app.AvailableDiagramsDropDown.Value);
    end
    
    set(app.REDCheckBox,'enable','on');
    set(app.BLACKCheckBox,'enable','on');
    set(app.BLUECheckBox,'enable','on');
    set(app.ARMCheckBox,'enable','on');
end