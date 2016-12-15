clc;
clear;close all;
th = linspace(0,1e+13);
c = cos(th);
s = sin(th);
e = c+1i*s;
a = 1:100;
e = a.*th.*e;
% figure();
plot(e)
axis tight
% axis ([-1 1 -1 1])
