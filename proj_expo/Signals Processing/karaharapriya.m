%% karahar priya
% Arohana :     S R2 G2 M1 P D2 N2 S
% Avarohana :   S N2 D2 P M1 G2 R2 S

% ON OCTAVE :
% C D E F G A B C
% C B A G F E D C

f = notefreq(-48:83);
f = reshape(f,12,11);
%% *Table of note frequencies*
Rows = {'C';'C#/Db';'D';'Eb/D#';'E';'F';'F#/Gb';'G';...
     'Ab/G#';'A';'Bb/A#';'B'};
Tf = table(f(:,1),f(:,2),f(:,3),f(:,4),f(:,5),...
        f(:,6),f(:,7),f(:,8),f(:,9),f(:,10),...
        f(:,11),...
    'RowNames',Rows,...
    'VariableNames',{'C0' 'C1' 'C2' 'C3' 'C4' 'C5' 'C6' 'C7' 'C8'...
     'C9' 'C10'});
 
t = linspace(0,2*pi,2000);

C = sin(2.*pi.*f(1,4).*t);
D = sin(2.*pi.*f(3,4).*t);
E = sin(2.*pi.*f(5,4).*t);
F = sin(2.*pi.*f(6,4).*t);
G = sin(2.*pi.*f(8,4).*t);
A = sin(2.*pi.*f(10,4).*t);
B = sin(2.*pi.*f(12,4).*t);

sound(C)
pause(0.5)

sound(D)
pause(0.5)

sound(E)
pause(0.5)

sound(F)
pause(0.5)

sound(G)
pause(0.5)

sound(A)
pause(0.5)

sound(B)
pause(0.5)

sound(C)
pause(0.5)
%sound([C D E F G A B C], 44100)

% Au = [C D E F G A B C];
% Ad = fliplr(Au);
% 
% sound(Au)
% 
% pause(1)
% 
% sound(Ad)
% plot(y)
% sound(y)
% pause(0.5)
% 

