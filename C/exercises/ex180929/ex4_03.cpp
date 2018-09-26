#include <iostream>

int main(int argc, char const *argv[]) {
  int in,n=0,c=-1;
  printf("Inserire i numeri di cui fare la media, inserire 0 per concludere la sequenza\n");
  while (in!=0) {
    printf("n=");
    scanf("%d",&in);
    n+=in;
    c++;
  }
  printf("la media dei numeri inseriti e' %f\n",(float)n/c);
  return 0;
}
