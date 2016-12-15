%% BBC - History of Indian Mathematics Part-2 of 2
% @ 4:20 
%%
% 
% $$0+\frac{1}{2}+\frac{1}{4}+\frac{1}{8}+\frac{1}{16}+\frac{1}{32}+....$$
% 

n = 0:16;
disp(n);
I =(1./2.^(n));
disp(Inf-I);
S = sum(I)-1;
disp(S)

    