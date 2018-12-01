%exp function

x=-5:0.1:5;
y=exp(x);
plot(x,y,'r')
hold on
y=1+x+(x.^2)/2+(x.^3)/6;
plot(x,y,'b')

%exp factorial

y=0;
for n=0:1:10
  y=y+x.^n/factorial(n);
endfor
plot(x,y,'k')

hold off
axis equal