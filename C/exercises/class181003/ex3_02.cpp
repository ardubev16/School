#include <iostream>

int main(int argc, char const *argv[]) {
  int a=33686017,b,c=0;
  short d=513,e=514,*f=(short *)&c;
  printf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,f );
  *f=d;
  *(f+1)=e;
  printf("%d %d %d %d %d %d\n",a,b,c,d,e,*f );

  return 0;
}
