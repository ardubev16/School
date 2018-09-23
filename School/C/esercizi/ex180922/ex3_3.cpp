#include <iostream>

int main(int argc, char const *argv[]) {
  int a;
  printf("a=");
  scanf("%d",&a);
  if (a<0) {
    a=-a;
  }
  printf("valore assoluto=%d\n",a);
  return 0;
}
