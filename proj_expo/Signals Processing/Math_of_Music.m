%% Mathematics of Music

% Finding the frequencies of different note on the octave.

%%
% 
% $$f_n = f_0 * (2^{\frac{1}{12}})^{n}$$
% 
%%
% 
% $$-48 \leq n \leq 83$$
%
% |for 10 octaves|

 
%%
% 
% $$where f_0 = 440 Hz ~~(A_4) ~equal-tempered ~scale$$
% 
%%
% 
% $$f_n ~is ~the ~required ~note ~frquency$$
% 

function Fn = notefreq(n)

Fn = Fo.*(2^(1/12)).^n;


