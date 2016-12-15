T = table(['M';'F';'M'],[45;32;34],...
    {'NY';'CA';'MA'},logical([1;0;0]),...
    'VariableNames',{'Gender' 'Age' 'State' 'Vote'})


Rows = {'C';'C#/Db';'D';'Eb/D#';'E';'F';'F#/Gb';'G';...
     'Ab/G#';'A';'Bb/A#';'B'};
T1 = table(F(:,1),F(:,2),F(:,3),F(:,4),F(:,5),...
        F(:,6),F(:,7),F(:,8),F(:,9),F(:,10),...
        F(:,11),...
    'RowNames',Rows,...
    'VariableNames',{'C0' 'C1' 'C2' 'C3' 'C4' 'C5' 'C6' 'C7' 'C8'...
     'C9' 'C10'})
