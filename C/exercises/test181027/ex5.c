#include <stdio.h>

void decbin(int dec, char bin[]){
  int i=29;
  while (dec) {
    bin[i]=dec%2+48;
    dec/=2;
    i--;
  }
  for (size_t j = 0; j < 29-i; j++)
    bin[j]=bin[j+i+1];
  bin[30-i]='\0';
}

int main(int argc, char const *argv[]) {
  int n;
  char bin[31];
  do {
    printf("Inserire il numero: ");
    scanf("%d", &n);
  } while(n<0 || n>999999999);

  decbin(n,bin);
  printf("%s\n", bin);

  return 0;
}
