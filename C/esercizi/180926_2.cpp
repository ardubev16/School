#include <iostream>
#include <math.h>

int decbin(int d){
  int b=0;
  for (int i = 0; d>0; i++) {
    b+=(d%2==1)?pow(10,i):0;
    d/=2;
  }
  return b;
}

int bitcount(int b){
  int c=0;
  while (b!=0) {
    c++;
    b/=10;
  }
  return c;
}

int main(int argc, char const *argv[]) {
  int b,d;
  printf("Inserire il numero da convertire in binario\nn=");
  scanf("%d",&d);
  b=decbin(d);
  printf("Il numero in binario e' %d\n",b);
  printf("Il numero di bit e' %d\n",bitcount(b));
  return 0;
}
