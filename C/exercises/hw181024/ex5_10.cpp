#include <iostream>

void vis(int n, int *a) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n,m;
  do {
    printf("Inserire il numero di elementi dell'array a: ");
    scanf("%d", &n);
  } while(n>30 || n<=0);
  int a[n];
  printf("Inserire i valori dell'array a in maniera crescente:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  do {
    printf("Inserire il numero di elementi dell'array b: ");
    scanf("%d", &m);
  } while(m>30 || m<=0);
  int b[m];
  printf("Inserire i valori dell'array b in maniera crescente:\n");
  for (int i = 0; i < m; i++)
    scanf("%d", &b[i]);

  int c[m+n];
  int i=0, j=0, p=0;
  for (i,j,p; i<n && j<m && p<m+n; p++) {
    if (a[i]<b[j]) {
      c[p]=a[i];
      i++;
    } else {
      c[p]=b[j];
      j++;
    }
  }
  if (i==n && j!=m)
    for (j; j < n; j++, p++)
      c[p]=b[j];
  if (j==m && i!=n)
    for (i; i < m; i++, p++)
      c[p]=a[i];

  vis(m+n,c);
  return 0;
}
