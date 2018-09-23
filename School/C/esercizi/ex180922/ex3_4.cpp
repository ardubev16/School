#include <iostream>

int main(int argc, char const *argv[]) {
  int a,b;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  if (b>=0) {
    printf("%d e' positivo\n",b);
  }
  else {
    printf("%d e' negativo\n",b);
  }
  if (a%2==0) {
    printf("%d e' pari\n",a);
  }
  else {
    printf("%d e' dispari\n",a);
  }
  printf("a+b=%d\n",a+b);
  if (a<0) {
    a=-a;
  }
  if (b<0) {
    b=-b;
  }
  printf("somma massima a, b=%d\n",a+b);
  return 0;
}
