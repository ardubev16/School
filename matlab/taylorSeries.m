%esp, cos, sen

xe=-5:0.1:3;
xs=xc=-10:0.1:10;
ye=ys=yc=0;

for n=0:1:100
  ye=ye+xe.^n/factorial(n);
endfor
for n=0:4:100
  yc=yc+xc.^n/factorial(n);
  n+=2;
  yc=yc-xc.^n/factorial(n);
endfor
for n=1:4:100
  ys=ys+xs.^n/factorial(n);
  n+=2;
  ys=ys-xs.^n/factorial(n);
endfor
hold on
plot(xe,ye,'b')
plot(xs,ys,'k')
plot(xc,yc,'r')
hold off
axis equal
