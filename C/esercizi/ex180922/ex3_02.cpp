#include <iostream>

int main(int argc, char const *argv[]) {
  int a;
  printf("a=");
  scanf("%d",&a);
  if (a>=0) {
    printf("%d e' positivo\n",a);
  }
  else {
    printf("%d e' negativo\n",a);
  }
  return 0;
}
