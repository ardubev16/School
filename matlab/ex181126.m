%scrivere un programma che restituisce un vettore contenente 1 se a(i)>=0, -1 altrimenti
a=randn(1,10)
for i=1:10;
  if a(i)>=0
    b(i)=1;
  else
    b(i)=-1;
  endif
endfor
display(b);

%b e' a con a(i) in ordine crescente
a=randn(1,10)
b=sort(a);
display(b);