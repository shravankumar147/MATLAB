function r =eig3(A)
syms x;
I = eye(size(A))*x;
A1 = I - A;

A1 = A1(:,[1 2 3 1 2]);
det1 = prod(diag(A1))+prod(diag(A1,1))+prod(diag(A1,2));

A2 = A1(:,[3 2 1 3 2]);
det2 = prod(diag(A2))+prod(diag(A2,1))+prod(diag(A2,2));

det = det1 - det2;
S = expand(det);
pretty(S);
r = solve(S,x);
disp('Eigen Values :')
display(r)
