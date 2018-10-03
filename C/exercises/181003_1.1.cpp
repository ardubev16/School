#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  int xk,yk,xq,yq;
  do {
    printf("Inserire le coordinate del re\nx=");
    scanf("%d",&xk);
    printf("y=");
    scanf("%d",&yk);
  } while(xk>8 || xk<1 || yk>8 || yk<1);
  do {
    printf("Inserire le coordinate della regina\nx=");
    scanf("%d",&xq);
    printf("y=");
    scanf("%d",&yq);
  } while(xq>8 || xq<1 || yq>8 || yq<1);
  if (xk==xq || yk==yq || abs(xq-xk)==abs(yq-yk)) {
    printf("Scacco matto!\n");
  } else {
    printf("Il re e' ancora vivo\n");
  }
  return 0;
}
