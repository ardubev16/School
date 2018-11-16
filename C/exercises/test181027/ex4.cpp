#include <stdio.h>
#include <math.h>

int op(int *n, int a, int b){
  int nin=*n,auxA,auxB;
  auxA=*n/(int)pow(10,a)%10;
  auxB=*n/(int)pow(10,b)%10;
  *n=*n-auxA*(int)pow(10,a)-auxB*(int)pow(10,b)+auxA*(int)pow(10,b)+5*(int)pow(10,a);

  return nin!=*n?1:0;
}

int main(int argc, char const *argv[]) {
  int n,a,b;
  do {
    printf("Inserire il numero: ");
    scanf("%d", &n);
  } while(n>9999);
  do {
    printf("Inserire a e b compresi tra 0 e 3\na=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
  } while(a<0 || a>3 || b<0 || b>3);
  printf("%d\n", op(&n,a,b));
  printf("%d\n", n);

  return 0;
}
