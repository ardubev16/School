#include <iostream>

void vis(int n, int *a) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n,m,p=0;
  do {
    printf("Inserire il numero di elementi dell'array a: ");
    scanf("%d", &n);
  } while(n>30 || n<=0);
  int a[n];
  printf("Inserire i valori dell'array a:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  do {
    printf("Inserire il numero di elementi dell'array b: ");
    scanf("%d", &m);
  } while(m>30 || m<=0);
  int b[m];
  printf("Inserire i valori dell'array b:\n");
  for (int i = 0; i < m; i++)
    scanf("%d", &b[i]);

  int c[n<m?n:m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i]==b[j]) {
        c[p]=a[i];
        p++;
      }
    }
  }
  vis(p,c);
  return 0;
}
