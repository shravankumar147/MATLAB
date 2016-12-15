%% Read Complete Audio File 
load handel.mat

filename = 'handel.wav';
audiowrite(filename,y,Fs);
clear y Fs
% information about audio
info = audioinfo(filename)

[y,Fs] = audioread('handel.wav');

sound(y,Fs);

%% Read Portion Audio File 

load handel.mat

filename = 'handel.flac';
audiowrite(filename,y,Fs);

samples = [1,2*Fs];
clear y Fs
[y,Fs] = audioread(filename,samples);

sound(y,Fs);

