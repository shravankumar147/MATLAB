function [fn, frac] = dec2frac(n)
fn = floor(n);
frac = n-fn;
fprintf('Integer = %d --- fraction = %d',fn,frac)