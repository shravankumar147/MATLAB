theta = 0:0.001:2*pi;
for a = 1:10
    e = a*exp(1i*theta);
end
subplot(211)
plot(theta,e)
subplot(212)
stem(theta,e)

