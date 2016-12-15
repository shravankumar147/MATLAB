%% Absoute Summablity 
x = randi([-10,10],[1,128]);
N = length(x);
A = abs(x);
S = sum(A);
E = sum(A.^2);
AvgP = E/N;