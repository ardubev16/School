#include <iostream>

int main(int argc, char const *argv[]) {
  int nf,ni,d=0;
  printf("Inserire un numero intero positivo\nn=");
  scanf("%d",&nf);
  if (nf<=0) {
    printf("Errore: il numero inserito e' negatvo\n");
  }
  for (ni=1; ni<=nf; ni++) {
    if (nf%ni==0){
      printf("%d e' un divisore di %d\n",ni,nf);
      d++;
    }
  }
  d==2?printf("%d e' un numero primo\n",nf):0;

  return 0;
}
