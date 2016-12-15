F = notefreq(-48:83);
F = reshape(F,12,11);
%% *Table of note frequencies*
Rows = {'C';'C#/Db';'D';'Eb/D#';'E';'F';'F#/Gb';'G';...
     'Ab/G#';'A';'Bb/A#';'B'};
Tf = table(F(:,1),F(:,2),F(:,3),F(:,4),F(:,5),...
        F(:,6),F(:,7),F(:,8),F(:,9),F(:,10),...
        F(:,11),...
    'RowNames',Rows,...
    'VariableNames',{'C0' 'C1' 'C2' 'C3' 'C4' 'C5' 'C6' 'C7' 'C8'...
     'C9' 'C10'})
 
% t = linspace(0,2*pi,4000);
% for i = 1:12
% y = sin(2.*pi.*F(i,5).*t);
% plot(y)
% sound(y)
% pause(0.7)
% end



