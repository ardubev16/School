#include <iostream>

int main(int argc, char const *argv[]) {
  int a,b,mcd;
  printf("Inserire due numeri interi positivi\nn1=");
  scanf("%d",&a);
  printf("n2=");
  scanf("%d",&b);
  if (a<=0 || b<=0) {
    printf("Errore: uno dei numeri inseriti e' negatvo\n");
  }
  mcd=(a>b)?b:a;
  while (a%mcd!=0 || b%mcd!=0) {
    mcd--;
  }
  printf("%d e' il massimo comune divisore di %d e %d\n",mcd,a,b);
  return 0;
}
