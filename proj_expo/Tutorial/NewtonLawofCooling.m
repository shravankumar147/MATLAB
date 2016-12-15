%% Newton's Law of Cooling

%%
% 
% $$\frac{d\theta}{dt}\propto (\theta - \theta_{0})$$
% 
%%
% 
% $$\frac{d\theta}{dt}=-k(\theta - \theta_{0})$$
% 
% $$\frac{d\theta}{\theta - \theta_{0}}=-kdt$$
% 
% integrating on both sides
%%
% 
% $$\int\frac{d\theta}{\theta - \theta_{0}}=\int-kdt$$
% 

%%
% 
% $$\log(\theta - \theta_{0}) = -kt + c$$
% 
%
%%
% 
% $$at~~ t = 0,~\theta = \theta_{1}$$
% 
%%
% 
% $$c = \log(\theta - \theta_{1})$$
% 

function [tht] = NewtonLawofCooling(thm,tho,t)

th1 = (tht-thm)/(tho-thm);
th2 = log(th1);
k = -1/t .* th2;
tht = thm*k*tht;
end






