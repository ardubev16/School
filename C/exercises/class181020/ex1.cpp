#include <iostream>
#include <math.h>

int invert(int *n, int a, int b){
  int in=*n,va,vb;
  va=in/(int)pow(10,a)%10;
  vb=in/(int)pow(10,b)%10;
  *n=*n-va*(int)pow(10,a)-vb*(int)pow(10,b);
  *n=*n+va*(int)pow(10,b)+vb*(int)pow(10,a);
  return *n!=in?1:0;
}

int main(int argc, char const *argv[]) {
  int n,in,a,b;
  do {
    printf("Inserire il numero n di massimo 9 cifre: ");
    scanf("%d", &n);
  } while(n>999999999);
  in=n;
  do {
    printf("Inserire i numeri a e b\na=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
  } while(a<0 || a>8 || b<0 || b>8);

  printf("%d\n", invert(&n,a,b));
  n!=in?printf("%d\n", n):0;

  return 0;
}
