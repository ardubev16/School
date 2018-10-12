#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  int b,d=0,i=0;
  printf("Inserire il numero binario: ");
  scanf("%d",&b);
  for (i; b>0; i++) {
    d+=(b%10==1)?0:pow(10,i);
    b/=10;
  }
  d++;
  printf("Il numero opposto e' 0%d\n",d);
  return 0;
}
