#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=100,len;
  char a[MAXN+1],b[MAXN+1];

  printf("Inserire la stringa\n");
  fgets(a, MAXN+1, stdin);
  len=strlen(a);
  printf("%s\n", a);

  for (size_t i = 0; i < len; i++) {
    if (a[i]=='.')
      b[i]='\n';
    else
      b[i]=a[i];
  }
  b[len]='\0';

  printf("%s\n", b);

  return 0;
}
