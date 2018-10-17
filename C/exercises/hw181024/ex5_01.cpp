#include <iostream>

int main(int argc, char const *argv[]) {
  int n,v,c=0;
  do {
    printf("Inserire il numero di valori: ");
    scanf("%d", &n);
  } while(n>30);
  int a[n];

  printf("Inserire la sequenza di numeri:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Inserire il numero da confrontare con la sequenza: ");
  scanf("%d", &v);
  for (int i = 0; i < n; i++) {
    if (a[i]==v)
      printf("Il numero e' presente\n");
    else
      c++;
  }
  if (c==n)
    printf("Il numero non e' presente\n");

  return 0;
}
