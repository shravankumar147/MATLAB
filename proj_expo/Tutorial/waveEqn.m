[p,e,t] = initmesh('squareg');

x = p(1,:)'; y = p(2,:)';

u0 = atan(cos(pi/2*x));
ut0 = 3*sin(pi*x).*exp(sin(pi/2*y));

n = 31; % number of frames in eventual animation
tlist = linspace(0,5,n); % list of times
d = 1;
c = 1;
a = 0;
f = 0;
uu=hyperbolic(u0,ut0,tlist,'squareb3',p,e,t,c,a,f,d);


delta = -1:0.1:1;
[uxy,tn,a2,a3] = tri2grid(p,t,uu(:,1),delta,delta);
gp = [tn;a2;a3];

umax = max(max(uu));
umin = min(min(uu));

newplot
M = moviein(n);
for i=1:n,
    pdeplot(p,e,t,'xydata',uu(:,i),'zdata',uu(:,i),...
    'mesh','on','xygrid','on','gridparam',gp,...
    'colorbar','on','zstyle','continuous');
    axis([-1 1 -1 1 umin umax]); caxis([umin umax]);
    M(:,i) = getframe;
end
movie(M,10);