#include <iostream>

int main(int argc, char const *argv[]) {
  int nb;
  printf("Inserire il numero di bit: ");
  scanf("%d", &nb);
  int b[nb];
  printf("Inserire i bit partendo dal MSB:\n");
  for (int i = 0; i < nb; i++)
    scanf("%d", &b[i]);
  for (int i = 0; i < nb; i++)        //print b[]
    printf("%d", b[i]);
  printf("\n");
  int j=nb-1;
  while (!b[j])
    j--;
  j--;
  while (j>=0) {
    b[j]=!b[j];
    j--;
  }
  for (int i = 0; i < nb; i++) {        //print b[]
    printf("%d", b[i]);
  }
  return 0;
}
