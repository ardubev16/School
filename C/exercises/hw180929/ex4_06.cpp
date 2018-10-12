#include <iostream>

int main(int argc, char const *argv[]) {
  int nf,f=1;
  printf("Inserire un numero intero positivo\nn=");
  scanf("%d",&nf);
  if (nf<0){
    printf("Errore: il numero inserito e' negatvo\n");
  } else {
    for (nf; nf>0; nf--) {
      f*=nf;
    }
  }
  printf("il fattoriale del numero inserito e' %d\n",f);
  return 0;
}
