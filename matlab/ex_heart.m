a=0:0.01:2*pi;
x=16*power(sin(a), 3);
y=13*cos(a)-5*cos(2*a)-2*cos(3*a)-cos(4*a);
plot(x,y,'r')
axis equal