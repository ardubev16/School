#include <iostream>

int main(int argc, char const *argv[]) {
  unsigned int a[30],n,in;
  printf("Inserire il numero di numeri da inserire: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &in);
    if (in%2)
      a[i]=0;
    else
      a[i]=in;
  }
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);

  return 0;
}
