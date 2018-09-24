#include <iostream>

int main(int argc, char const *argv[]) {
  int in,inold,n,n0, pos=0,neg=0,null=0,par=0,dis=0,cc=1,dd=1;
  printf("Inserire il numero di numeri da confrontare\nnumeri=");
  scanf("%d",&n);
  n0=n;
  printf("Inserire i numeri\n");
  for (n; n>0; n--) {
    printf("N=");
    scanf("%d",&in);
    in>0?pos++:in<0?neg++:null++;
    in%2==0?par++:dis++;

    if(n0!=n) {
      in>inold && cc==1?cc=1:cc=0;
      in<inold && dd==1?dd=1:dd=0;
    }
    inold=in;
  }
  printf("Numeri:\npositivi: %d\nnulli: %d\nnegativi: %d\npari: %d\ndispari: %d\n",pos,null,neg,par,dis);
  if(n0>1)
    cc==1?printf("La sequenza e' crescente\n"):dd==1?printf("La sequenza e' decrescente\n"):printf("La sequenza non e' crescente ne' decrescente\n");

  return 0;
}
