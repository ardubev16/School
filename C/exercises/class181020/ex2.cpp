#include <iostream>

unsigned int bits(int n){
  int aux3,aux4;
  n=n&~1;
  n=n|(1<<1);
  n=n^(1<<2);

  aux3=n&(1<<3);
  aux4=n&(1<<4);
  n=n-aux3-aux4;
  n=n+aux3*2+aux4/2;

  return n;
}

int main(int argc, char const *argv[]) {
  unsigned int n;
  printf("Inserire il numero positivo n\n");
  scanf("%u", &n);
  printf("%u\n", bits(n));
  return 0;
}
