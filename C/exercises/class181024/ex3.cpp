#include <iostream>

void crescente(int a[], int n) {
  int min,temp;
  for (int i = 0; i < n-1; i++){
    min = i;
    for (int j = i+1; j < n; j++)
      if (a[j] < a[min])
        min = j;
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
  }
}

void vis(int a[], int n) {
  for (int i=0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int a[30],n,c=0,p=0;
  do {
    printf("Inserire il numero di elementi: ");
    scanf("%d", &n);
  } while(n>30 || n<=0);
  printf("Inserire i valori dell'array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    for (int j = 0; j <= i; j++)
      a[i]!=a[j]?c++:0;
    if (c==i) {
      a[p]=a[i];
      p++;
    }
    c=0;
  }
  crescente(a, p);
  vis(a, p);
  return 0;
}
