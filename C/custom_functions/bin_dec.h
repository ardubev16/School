#include <math.h>

int decbin(int d){
  int b=0;
  for (int i = 0; d>0; i++) {
    b+=(d%2==1)?pow(10,i):0;
    d/=2;
  }
  return b;
}

int bindec(int b){
  int d=0;
  for (int i=0; b>0; i++) {
    if (b%10==1) {
      d+=pow(2,i);
    }
    b/=10;
  }
  return d;
}
