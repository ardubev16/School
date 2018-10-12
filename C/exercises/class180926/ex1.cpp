#include <iostream>
#include <math.h>

void invert(int *a,int *b){
  int c;
  if (pow(*a,2)+pow(*b,2)>100) {
    c=*a;
    *a=*b;
    *b=c;
  }
}

int main(int argc, char const *argv[]) {
  int a,b;
  printf("Inserire i due numeri\nn1=");
  scanf("%d",&a);
  printf("n2=");
  scanf("%d",&b);
  invert(&a,&b);
  printf("n1=%d\nn2=%d\n",a,b);

  return 0;
}
