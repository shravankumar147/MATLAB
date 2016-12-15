function [y,fs] = synthesize(chord,T,voice)
% SYNTHESIZE  Generate musical notes and cords.
% synthesize(note,T,voice)  Generates a note for T seconds with given tuning.
% synthesize([note1, ..., noten],T,voice)  Generates a chord of several notes.
% Notes are integers specifying half tones above and below middle C.
% voice = 1 for piano, 2 for just intonation, 3 for equal temperament.

% Examples:
%   synthesize(0) generatees middle C (261.625 Hz) for 1/2 second.
%   synthesize(1) is C#.
%   synthesize(-1) is C-flat.
%   synthesize(12) is high C, one octave above middle C.
%   synthesize([0 4 7]) is the perfect fifth major triad C-E-G. 
%   A scale with one second per note:
%      for k = [0 2 4 5 7 9 11 12]
%         synthesize(k,1)
%      end

   switch voice

      case 1  % equal temperament

         sigma = 2^(1/12);
         C4 = 440*sigma^(-9);
         fs = 44100;
         t = 0:1/fs:T;
         y = zeros(size(t));
         for n = chord
            hz = C4 * sigma^n;
            y = y + sin(2*pi*hz*t);
         end
         y = y/length(chord);

      case 2  % just intonation

         sigma = 2^(1/12);
         C4 = 440*sigma^(-9);
         fs = 44100;
         t = 0:1/fs:T;
         r = [1 16/15 9/8 6/5 5/4 4/3 7/5 3/2 8/5 5/3 7/4 15/8];
         r = [r/2 r 2*r 4];
         y = zeros(size(t));
         for n = chord
            hz = C4 * r(n+13);
            y = y + sin(2*pi*hz*t);
         end
         y = y/length(chord);

      case 3  % piano

         middle_c = get(gcf,'userdata');
         fs = 44100;
         t = 0:1/fs:T;
         y = zeros(size(t));
         for n = chord
            y = y + resamplex(middle_c,2^(n/12),length(y));
         end
   end
end
% ------------------------------------

function y = resamplex(y,factor,L)
% RESAMPLE 
% Requires Signal Processing Toolbox

   [p,q] = rat(factor,1.e-4);
   y = resample(y,q,p)';
   L = floor(L);
   if L < length(y)
      y = y(1:L);
   else
      y(L) = 0;
   end
   r = 150:-1:0;
   y(L-r:L) = y(L-r:L).*r/150;
end

% ------------------------------------