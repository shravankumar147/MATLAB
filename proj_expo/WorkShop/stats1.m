scores = 100*rand(1,100);

hist(scores,5:10:95);

N=histc(scores,0:10:100);

histogram(N)

bar(0:10:100,N,'r')