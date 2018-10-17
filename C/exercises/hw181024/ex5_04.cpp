#include <iostream>

int main(int argc, char const *argv[]) {
  int n;
  printf("Inserire il numero di valori: ");
  scanf("%d", &n);
  int a[n];

  printf("Inserire la sequenza di numeri:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < a[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
