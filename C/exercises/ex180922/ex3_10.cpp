#include <iostream>

int main(int argc, char const *argv[]) {
  int a,b,c;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("c=");
  scanf("%d",&c);
  if ((a>b && b>c) || (a>c && c>b)) {
    printf("%d e' il valore massimo\n",a);
  } else if((b>a && a>c) || (b>c && c>a)){
    printf("%d e' il valore massimo\n",b);
  } else{
    printf("%d e' il valore massimo\n",c);
  }
  return 0;
}
