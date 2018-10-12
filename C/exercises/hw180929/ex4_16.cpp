#include <iostream>

int main(int argc, char const *argv[]) {
  int n,f1=1,f2=0,c;
  printf("Inserire il numero di elementi della sequenza di fibonacci da visualizzare\nn=");
  scanf("%d",&n);
  for (n; n>0; n--) {
    printf("%d ",f1);
    c=f1;
    f1+=f2;
    f2=c;
  }
  return 0;
}
