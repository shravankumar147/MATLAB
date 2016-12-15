% u = [1 0 1];
% v = [2 7];
% w = conv(u,v)
% Create vectors u and v containing the coefficients of the polynomials  $x^2+1$ and  $2x+7$.
% w contains the polynomial coefficients for  $2x^3+7x^2+2x+7$.
close all;
syms x u v w 
x = -15:0.01:15;
u = x.^2+1;
v = 2.*x + 7;
w = u.*v;
plot(u)
hold on 
plot(v)
plot(w)

hold off
% %% 
% h = animatedline;
% axis([0 6*pi -1 1])
% x = linspace(0,6*pi,2000);
% 
% for k = 1:length(x)
%     y = sin(x(k));
%     z = x(k)*4;
%     q = conv(y,z);
%     addpoints(h,x(k),z);
%     addpoints(h,x(k),y);
%     addpoints(h,x(k),q);
%     
%     drawnow
% end
% % 
% % for x = 1:1:500;
% % u(x) = x.^2 + 1;
% % v(x) = x.^2 + 1;
% % end
% % %%
% % w = u.*v;
% % plot(u)
% % hold on 
% % plot(v)
% % hold on
% % plot(w)
% % 
% % hold off
% % 
