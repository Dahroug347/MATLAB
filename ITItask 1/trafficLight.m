%light traffic gui

%%
figure;

xlim([-5 25]);
rectangle('Position',[8,7,4,10],'FaceColor',[0 0 0],'EdgeColor','k',...
    'LineWidth',3,'Curvature',0.2);
rectangle('Position',[9.5,0,1,7],'FaceColor',[0.5 0.5 0.5],'EdgeColor','k',...
    'LineWidth',3,'Curvature',0.2);
pos = [8.75 8 2.5 2.5]; 
rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0 0.35 0]);

pos = [8.75 11 2.5 2.5]; 
rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0.35 0.35 0]);

pos = [8.75 14 2.5 2.5]; 
rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[1 0 0]);


line([9.5 10.5],[0 1], 'LineWidth',3,  'Color', [1 1 0]);
line([9.5 10.5],[2 3], 'LineWidth',3,  'Color', [1 1 0]);
line([9.5 10.5],[4 5], 'LineWidth',3,  'Color', [1 1 0]);

axis equal;

 while(true)
     
     pos = [8.75 8 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0 0.35 0]);

    pos = [8.75 11 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0.35 0.35 0]);

    pos = [8.75 14 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[1 0 0]);
    pause (3);
    
    pos = [8.75 8 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0 0.35 0]);

    pos = [8.75 11 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[1 1 0]);

    pos = [8.75 14 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0.35 0 0]);
    pause (3);
    
    
    pos = [8.75 8 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0 1 0]);

    pos = [8.75 11 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0.35 0.35 0]);

    pos = [8.75 14 2.5 2.5]; 
    rectangle('Position',pos,'Curvature',[1 1], 'FaceColor',[0.35 0 0]);
    pause (3);
    
    axis equal;
 end
    

