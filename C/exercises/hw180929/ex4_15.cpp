#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  int d,nb, b=0,k=0;
  printf("Inserire il numero da convertire in binario\nn=");
  scanf("%d",&d);
  printf("Inserire il numero di bit con cui scrivere il numero\nnb=");
  scanf("%d",&nb);
  for (int i = 0; d>0; i++) {
    b+=(d%2==1)?pow(10,i):0;
    d/=2;
    k++;
  }
  if (k<=nb) {
    for (nb; nb > k; nb--) {
      printf("0");
    }
    printf("%d\n",b);
  } else {
    printf("Errore: numero di bit insufficiente");
  }
  return 0;
}
