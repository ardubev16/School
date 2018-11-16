#include <stdio.h>

void vis(int n, int *a) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n,c=0,p=0;
  do {
    printf("Inserire il numero di elementi: ");
    scanf("%d", &n);
  } while(n>30 || n<=0);
  int a[n],b[n];
  printf("Inserire i valori dell'array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (a[i]<=9) {
      for (int j = 0; j <= i; j++)
        a[i]!=a[j] && a[i]!=b[j]?c++:0;
      if (c==i) {
        b[p]=a[i];
        p++;
      }
      c=0;
    }
  }
  vis(n,a);
  vis(p,b);
  return 0;
}
