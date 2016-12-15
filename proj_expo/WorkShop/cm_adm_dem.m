t = .01;
Fc = 10000; Fs = 80000;
t = [0:1/Fs:0.01]';
s = sin(2*pi*300*t)+2*sin(2*pi*600*t); % Original signal

[num,den] = butter(10,Fc*2/Fs); % Lowpass filter

y1 = ammod(s,Fc,Fs); % Modulate.
s1 = amdemod(y1,Fc,Fs,0,0,num,den); % Demodulate.