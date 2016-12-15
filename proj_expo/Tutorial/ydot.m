function z = ydot(t,y)
% Lorenz Equations
s=10; r=28; b=8/3;
z(1) = s*y(2) - s*y(1);
z(2) = r*y(1) - y(1)*y(3) - y(2);
z(3) = y(1)*y(2)-b*y(3);

% -------------------------------------------------------------------
%An mfile for the trapezoid method.......(I am not 100% on this one)
% -------------------------------------------------------------------
function y = trapezoid(t,x,h)
z1 = ydot(t,x);
g=x+h*z1;
z2=ydot(t+h,g);
g=x+h*z2;
z3=ydot(t+h,g);
y=x+h*(z1+z2+z3)/2;

% -----------------------------------------------------------------------
function [t,y] = lorentz(int,ic,h)
n=round((int(2)-int(1))/h);
y(1, : ) =ic;
t(1) = int(1);
for k=1:n
t(k+1) = t(k) + h;
y(k+1, : ) = trapezoid(t(k),y(k,: ) ,h);
end

plot3(t,y(:,1),t,y(:,2),t,y(:,3));
% -----------------------------------