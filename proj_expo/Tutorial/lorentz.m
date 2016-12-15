function [t,y] = lorentz(int,ic,h)
n=round((int(2)-int(1))/h);
y(1, : ) =ic;
t(1) = int(1);
for k=1:n
t(k+1) = t(k) + h;
y(k+1, : ) = trapezoid(t(k),y(k,: ) ,h);
end

plot3(t,y(:,1),t,y(:,2),t,y(:,3));
%---------------------------------
function y = trapezoid(t,x,h)
z1 = ydot(t,x);
g=x+h*z1;
z2=ydot(t+h,g);
g=x+h*z2;
z3=ydot(t+h,g);
y=x+h*(z1+z2+z3)/2;

%-----------------------------------------------------------------------
