function [xr] = ruota (x, alpha)
  %x e' un vettore 2x1
  %xr e' un vettore 2x1
  
  a=[cosd(alpha) -sind(alpha); sind(alpha) cosd(alpha)];
  xr=a*x;
endfunction
