%funzione esponenziale (x, 2x, 0.5x)

x=-2:0.1:2;
y=exp(x);
y2=exp(2*x);
y3=exp(0.5*x);
hold on
plot(x,y,'r')
plot(x,y2,'b')
plot(x,y3,'k')
hold off
axis equal

%funzione esponenziale (x, -x)

x=-2:0.1:2;
y=exp(x);
y2=exp(-x);
hold on
plot(x,y,'r')
plot(x,y2,'b')
hold off
axis equal

%traslazione (x1=x0+xt, y1=y0+yt)

x0=1;
y0=2;
xt=5;
yt=-2;
xlim([0 7])             %limiti x del grafico
ylim([-1 3])            %limiti y del grafico
hold on
plot(x0,y0,'ob')
plot(x0+xt,y0+yt,'or')
hold off
axis equal

%if else

x=2
if(x>3)                         %non si usano le {}
  display("x e' maggiore di 3")
else
  display("x e' minore di 3")
endif                           %ha la funzione della }

%equazioni di secondo grado

a=1;
b=8;
c=4;
delta=b^2-4*a*c;
if (delta>=0 && a~=0)       %diverso e' ~=
  x1=(-b+sqrt(delta))/2*a;
  x2=(-b-sqrt(delta))/2*a;
  display(x1 x2)
endif
