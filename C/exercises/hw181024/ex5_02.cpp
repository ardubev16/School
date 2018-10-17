#include <iostream>

int main(int argc, char const *argv[]) {
  int n,c=1;
  do {
    printf("Inserire il numero di valori: ");
    scanf("%d", &n);
  } while(n>30);
  int a[n];

  printf("Inserire la sequenza di numeri:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++) {
    if (a[i]==a[i+1]) {
      c++;
    }
  }
  if (c==n) {
    printf("Gli elementi del vettore sono tutti uguali tra loro\n");
  } else {
    printf("Alcuni elementi del vettore sono diversi\n");
  }

  return 0;
}
