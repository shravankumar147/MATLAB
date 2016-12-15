function top_right(N,n)
% N = magic(6);
% n = 5;
if length(N)>= n
    N(1:n, end-(n-1):end) = n;
    disp(N)
else
    disp('n should be less than or equal to size of N')
end