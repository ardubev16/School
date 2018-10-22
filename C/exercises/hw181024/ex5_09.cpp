#include <iostream>

int main(int argc, char const *argv[]) {
  int n,c=0,p=0;
  do {
    printf("Inserire il numero di elementi: ");
    scanf("%d", &n);
  } while(n>20 || n<=0);
  int a[n],b[n];
  printf("Inserire i valori dell'array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    for (int j = 0; j <= i; j++)
      a[i]!=a[j] && a[i]!=b[j]?c++:0;
    if (c==i) {
      b[p]=a[i];
      p++;
    }
    c=0;
  }
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i]==a[j]) {
        c++;
      }
    }
    printf("Il numero %d occorre %d volte\n", b[i],c);
    c=0;
  }
  return 0;
}
