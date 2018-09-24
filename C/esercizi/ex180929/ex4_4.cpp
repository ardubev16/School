#include <iostream>

int main(int argc, char const *argv[]) {
  int n, in, max, min;
  printf("Inserire il numero di numeri da confrontare\nnumeri=");
  scanf("%d",&n);
  printf("Inserire i numeri\nN=");
  scanf("%d",&max);
  min=max;
  for (n--; n>0; n--) {
    printf("N=");
    scanf("%d",&in);
    if (in>max) {
      max=in;
    }
    if (in<min) {
      min=in;
    }
  }
  printf("Il valore massimo e' %d e quello minimo %d\n",max, min);
  return 0;
}
