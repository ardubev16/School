#include <iostream>

int main(int argc, char const *argv[]) {
  int a,b,mcm;
  printf("Inserire due numeri interi positivi\nn1=");
  scanf("%d",&a);
  printf("n2=");
  scanf("%d",&b);
  if (a<=0 || b<=0) {
    printf("Errore: uno dei numeri inseriti e' negatvo\n");
  }
  mcm=(a>b)?a:b;
  while (mcm%a!=0 || mcm%b!=0) {
    mcm++;
  }
  printf("%d e' il minimo comune multiplo di %d e %d\n",mcm,a,b);
  return 0;
}
