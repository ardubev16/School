%funzione y=x-2
x=[-5 -4 -3 -2 -1 0 1 2 3 4 5 6];
y=x-2;
plot(x, y, 'c-')              %la '' cambia il tipo della linea

%triangolo
x=[1 5 3 1];
y=[1 1 3 1];
plot(x,y)

%retta intervallo
x=-5:0.01:5;                  %intervallo che parte da -5 e aggiunge 0.01 fino a 5
y=x-2;
plot(x,y,'o')

%circonferenza gognometrica
alpha=0:0.01:2*pi;
x=cos(alpha);
y=sin(alpha);
plot(x,y)
axis equal

%sinusoide y=sin(alpha)
alpha=-4*pi:0.01:4*pi;
y=sin(alpha);
plot(alpha,y)
axis equal

%doppia sinusoide 
alpha=0:0.01:4*pi;
ys=sin(alpha);
yc=cos(alpha);
plot(alpha,ys,'r')
hold on;                      %mette in pausa il grafico per disegnare piu linee
plot(alpha,yc,'g')
hold off;                     %toglie la pausa adal grafico
grid on;                      %attiva la griglia
axis equal