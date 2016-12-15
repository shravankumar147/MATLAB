A = 5;
x0 = 0;
y0 = 0;
sx = 4;
sy =4;
for x = 1:1:600
for y = 1:1:600

f(x,y) = A.*exp(-((x-x0/2.*sx.^2)+(y-y0)/2.*sy.^2));
drawnow
plot(f)

end
end
