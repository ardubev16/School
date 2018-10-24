#include <iostream>

unsigned short op(unsigned short n) {
  unsigned short aux1,aux3;
  n=n|0x5555;
  n=n&~0xAA00;
  aux1=n&(1<<1);
  aux3=n&(1<<3);
  n=n-aux3-aux1+aux1*4+aux3/4;
  n=n^0x00A0;
  return n;
}

int main(int argc, char const *argv[]) {
  unsigned short n;
  printf("Inserire il numero: ");
  scanf("%hd", &n);
  printf("%hd\n", op(n));
  return 0;
}
