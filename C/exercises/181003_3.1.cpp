#include <iostream>

int main(int argc, char const *argv[]) {
  int a[10]={1,2,3,4,5,6,7,8,9,10}, b[10];
  for (int i=0, j=9; i < 10; i++,j--) {
    *(b+i)=*(a+j);
  }
  for (int i = 0; i < 10; i++) {
    printf("%d %d\n",a[i],b[i]);
  }
  return 0;
}
