#include <iostream>

void vis(int n, int *a) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n;
  printf("Inserire il numero di elementi: ");
  scanf("%d", &n);
  int a[n];
  printf("Inserire i valori dell'array:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  vis(n,a);
  for (int i = 0; i < n-1; i++)
    a[i]=a[i+1];
  a[n-1]=0;

  vis(n,a);
  for (int i = n-1; i > 0; i--)
    a[i]=a[i-1];
  a[0]=0;

  vis(n,a);
  return 0;
}
