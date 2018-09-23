#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  int b,d=0,i=0;
  printf("Inserire il numero binario: ");
  scanf("%d",&b);
  for (i; b>0; i++) {
    if (b%10==1) {
      d+=pow(2,i);
    }
    b/=10;
  }
  printf("Il numero in decimale e' %d\n",d);
  return 0;
}
