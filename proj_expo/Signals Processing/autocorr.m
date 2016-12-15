function rxx = autocorr(x,y)
in = nargin ;
disp(in)
if (in)
    y = x;
end
s = sum(x.*y);
n=sqrt(sum(x.^2)*sum(y.^2));
rxx = s/n;
disp('how similar they are')
disp(rxx*100);