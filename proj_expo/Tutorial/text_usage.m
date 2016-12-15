x = 0:pi/20:2.5*pi;
y = sin(x);

figure % new figure window

subplot(221)
plot(x,y)
text(pi,0,' \leftarrow \eta sin(\pi)')

subplot(222)
plot(x,y)
text(pi,0,' \rightarrow \lambda sin(\pi)')

subplot(223)
plot(x,y)
text(pi,0,' \uparrow \theta sin(\pi)')

subplot(224)
plot(x,y)
text(pi,0,' \downarrow \psi sin(\pi)')