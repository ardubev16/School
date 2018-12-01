#include <stdio.h>

unsigned int operazione(unsigned int n){
  unsigned int aux2,aux5;
  n=n|0x81;
  n=n&0xBD;

  aux2=n&(1<<2);
  aux5=n&(1<<5);
  n=n-aux2-aux5+aux2*8+aux5/8;

  n=n^0x18;

  return n;
}

int main(){
  unsigned int n;
  do{
    printf("Inserire un numero da 1 a 255: ");
    scanf("%u", &n);
  }while(n<1 || n>255);
  printf("%u\n",operazione(n));

  return 0;
}
