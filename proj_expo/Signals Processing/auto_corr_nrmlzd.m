x = [1 3 -2 4];
s =sum(x.^2);
n=sqrt(sum(x.^2)*sum(x.^2));
rxx = s/n;
disp('how similar they are')
disp(rxx*100);