#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nf,ni,p;
  printf("Inserire un numero intero positivo\nn=");
  scanf("%d",&nf);
  if (nf<=0) {
    printf("Errore: il numero inserito e' negatvo\n");
  }
  for (ni=1; ni<=nf; ni++) {
    p=pow(ni,2);
    printf("%d^2=%d\n",ni,p);
  }

  return 0;
}
