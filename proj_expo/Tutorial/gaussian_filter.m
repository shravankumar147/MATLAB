x = -6:1:6;
a = 1;
g = sqrt(a/pi)*exp(-(a*x.^2));

stem(g);grid on;

% syms a x g;
% a =1;
% g =@(x) sqrt(a/pi)*exp(-(a*x.^2));
% 
% d = diff(g,x)
