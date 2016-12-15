%% Mathematics of Music

% Finding the frequencies of different note on the octave.

%%
% 
% $$f_n = f_9 * (2^{\frac{1}{12}})^{n}$$
% 
%%
% 
% $$-48 \leq n \leq 83$$
%
% |for 10 octaves|

 
%%
% 
% $$where f_9 = 440 Hz ~~(A_4) ~equal-tempered ~scale$$
% 
%%
% 
% $$f_n ~is ~the ~required ~note ~frquency$$
% 

%%
% *Table of note frequencies*
function Fn = notefreq(n)
%Fo = 261.63;   C (middle C Octave 4 "C4")
F9 = 440;
Fn = F9.*(2^(1/12)).^(n-9);



