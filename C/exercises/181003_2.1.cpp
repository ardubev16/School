#include <iostream>

int main(int argc, char const *argv[]) {
  int n;
  do {
    printf("Inserire il giorno dell'anno: ");
    scanf("%d",&n);
  } while(n<1 || n>365);
  printf("Il giorno e' ");
  switch (n%7) {
    case 1:printf("Martedi'\n"); break;
    case 2:printf("Mercoledi'\n"); break;
    case 3:printf("Giovedi'\n"); break;
    case 4:printf("Venerdi'\n"); break;
    case 5:printf("Sabato\n"); break;
    case 6:printf("Domenica\n"); break;
    case 0:printf("Lunedi'\n");
  }
  return 0;
}
