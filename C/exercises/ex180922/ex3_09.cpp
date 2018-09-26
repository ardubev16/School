#include <iostream>

int main(int argc, char const *argv[]) {
  int a,b;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  if (a>b) {
    printf("%d e' maggiore di %d\n%d e' il valore massimo\n",a,b,a);
  } else {
    printf("%d e' maggiore di %d\n%d e' il valore massimo\n",b,a,b);
  }
  return 0;
}
