function [app] = drawSelectedPlatforms(app,platformSelection,keyword,ax,drop_states_RED,drop_states_BLACK,drop_states_BLUE,rs,re,rw,ree)
    % This function draws the platforms based on the
    % 'platformSelection' variable. It is called by the following
    % functions:
    %    AddPlatformSim
    %    AddPlatformExternalFig
    %    AddPlatformLive
    % Inputs:
    %   keyword: "simulation", "external", or "live"
    %   ax: figure drawing object; for 'simulation' this is app.ExperimentPreview
    %       for 'external' this is ax, for 'live' this is app.ExperimentPreviewLive
    %
    
    % Draw the relevant platforms:
    if (platformSelection == 1)
        drawRED(app,keyword,drop_states_RED,ax);
    elseif (platformSelection == 2)
        drawBLACK(app,keyword,drop_states_BLACK,ax);
    elseif (platformSelection == 3)
        drawRED(app,keyword,drop_states_RED,ax);
        drawBLACK(app,keyword,drop_states_BLACK,ax);
    elseif (platformSelection == 4)
        drawRED(app,keyword,drop_states_RED,ax);
        drawBLACK(app,keyword,drop_states_BLACK,ax);
        drawARM(app,keyword,rs,re,rw,ree,ax);
    elseif (platformSelection == 5)
        drawRED(app,keyword,drop_states_RED,ax);
        drawARM(app,keyword,rs,re,rw,ree,ax);
    elseif (platformSelection == 6)
        drawBLUE(app,keyword,drop_states_BLUE,ax);
    elseif (platformSelection == 7)
        drawRED(app,keyword,drop_states_RED,ax);
        drawBLUE(app,keyword,drop_states_BLUE,ax);
    elseif (platformSelection == 8)
        drawRED(app,keyword,drop_states_RED,ax);
        drawBLACK(app,keyword,drop_states_BLACK,ax);
        drawBLUE(app,keyword,drop_states_BLUE,ax);
    elseif (platformSelection == 9)
        drawBLACK(app,keyword,drop_states_BLACK,ax);
        drawBLUE(app,keyword,drop_states_BLUE,ax);        
    elseif (platformSelection == 10)
        drawRED(app,keyword,drop_states_RED,ax);
        drawBLUE(app,keyword,drop_states_BLUE,ax);
        drawARM(app,keyword,rs,re,rw,ree,ax);
    elseif (platformSelection == 11)
        drawRED(app,keyword,drop_states_RED,ax);
        drawBLACK(app,keyword,drop_states_BLACK,ax);
        drawBLUE(app,keyword,drop_states_BLUE,ax);
        drawARM(app,keyword,rs,re,rw,ree,ax);
    end

    % Nested function for plotting RED, depending on the keyword
    function drawRED(app,keyword,param,ax)
        if keyword == "simulation"
            [app.REDFigHdl, app.REDFigPatch] = DrawSpacecraftPrivateSimulation(app,[param(2),param(1),0.3,0.3,param(3),3],"r");
            app.REDPathPlot = plot(app.ExperimentPreview, param(2),param(1),'Color','red');
        elseif keyword == "external"
            [app.REDFigHdl, app.REDFigPatch] = DrawSpacecraftPrivateExternal(app,[param(2),param(1),0.3,0.3,param(3),3],"r",ax);
            app.REDPathPlot = plot(ax, param(2),param(1),'Color','red');
        elseif keyword == "live"
            [app.REDFigLiveHdl,app.REDFigLivePatch] = DrawSpacecraftPrivateLive(app,[param(2),param(1),0.3,0.3,param(3),3],"r");
            app.REDPathPlot = plot(app.ExperimentPreviewLive, param(2),param(1),'Color','red');
        end
    end
    % Nested function for plotting BLACK, depending on the keyword
    % NOTE: By default, this plots solar panels. To change behaviour, 
    % switch the last input parameter from a 4 either a 1,2,or 3. 
    % See function DrawSpacecraft() for details.
    function drawBLACK(app,keyword,param,ax)
        if keyword == "simulation"
            [app.BLACKFigHdl,app.BLACKFigPatch] = DrawSpacecraftPrivateSimulation(app,[param(2),param(1),0.3,0.3,param(3),3],"k");
            app.BLACKPathPlot = plot(app.ExperimentPreview, param(2),param(1),'Color','black');
        elseif keyword == "external"
            [app.BLACKFigHdl,app.BLACKFigPatch] = DrawSpacecraftPrivateExternal(app,[param(2),param(1),0.3,0.3,param(3),3],"k",ax);
            app.BLACKPathPlot = plot(ax, param(2),param(1),'Color','black');
        elseif keyword == "live"
            [app.BLACKFigLiveHdl,app.BLACKFigLivePatch] = DrawSpacecraftPrivateLive(app,[param(2),param(1),0.3,0.3,param(3),3],"k");
            app.BLACKPathPlot = plot(app.ExperimentPreviewLive, param(2),param(1),'Color','black');
        end
    end
    % Nested function for plotting BLUE, depending on the keyword
    function drawBLUE(app,keyword,param,ax)
        if keyword == "simulation"
            [app.BLUEFigHdl,app.BLUEFigPatch] = DrawSpacecraftPrivateSimulation(app,[param(2),param(1),0.3,0.3,param(3),3],"b");
            app.BLUEPathPlot = plot(app.ExperimentPreview, param(2),param(1),'Color','blue');
        elseif keyword == "external"
            [app.BLUEFigHdl,app.BLUEFigPatch] = DrawSpacecraftPrivateExternal(app,[param(2),param(1),0.3,0.3,param(3),3],"b",ax);
            app.BLUEPathPlot = plot(ax, param(2),param(1),'Color','blue');
        elseif keyword == "live"
            [app.BLUEFigLiveHdl,app.BLUEFigLivePatch] = DrawSpacecraftPrivateLive(app,[param(2),param(1),0.3,0.3,param(3),3],"b");
            app.BLUEPathPlot = plot(app.ExperimentPreviewLive, param(2),param(1),'Color','blue');
        end
    end
    % Nested function for plotting ARM, depending on the keyword
    function drawARM(app,keyword,rs,re,rw,ree,ax)
        if keyword == "live"
            app.REDFigLiveLink1 = line(app.ExperimentPreviewLive,[rs(1,1)  re(1,1)],[rs(1,2) re(1,2)],'Color','red');
            app.REDFigLiveLink2 = line(app.ExperimentPreviewLive,[re(1,1)  rw(1,1)],[re(1,2) rw(1,2)],'Color','red');
            app.REDFigLiveLink3 = line(app.ExperimentPreviewLive,[rw(1,1) ree(1,1)],[rw(1,2) ree(1,2)],'Color','red');
            app.REDFigLiveJoin0 = scatter(app.ExperimentPreviewLive,rs(1,1),rs(1,2),'filled','k');
            app.REDFigLiveJoin1 = scatter(app.ExperimentPreviewLive,re(1,1),re(1,2),'filled','k');
            app.REDFigLiveJoin2 = scatter(app.ExperimentPreviewLive,rw(1,1),rw(1,2),'filled','k');
            app.REDFigLiveJoin3 = scatter(app.ExperimentPreviewLive,ree(1,1),ree(1,2),'filled','k');
        else
            app.REDFigLink1 = line(ax,[rs(1,1)  re(1,1)],[rs(1,2) re(1,2)],'Color','red');
            app.REDFigLink2 = line(ax,[re(1,1)  rw(1,1)],[re(1,2) rw(1,2)],'Color','red');
            app.REDFigLink3 = line(ax,[rw(1,1) ree(1,1)],[rw(1,2) ree(1,2)],'Color','red');
            app.REDFigJoin0 = scatter(ax,rs(1,1),rs(1,2),'filled','k');
            app.REDFigJoin1 = scatter(ax,re(1,1),re(1,2),'filled','k');
            app.REDFigJoin2 = scatter(ax,rw(1,1),rw(1,2),'filled','k');
            app.REDFigJoin3 = scatter(ax,ree(1,1),ree(1,2),'filled','k');
        end

    end

end
