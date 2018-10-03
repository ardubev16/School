%"figura geometrica ruotando z"

z1=cosd(30)+i*sind(30)
for k=1:1:13
  z(k)=z1^k;
endfor
plot(z)
axis equal
