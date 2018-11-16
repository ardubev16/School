#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=30,cnt=0;
  char a[MAXN+1],b[MAXN+1];

  printf("Inserire la prima stringa\n");
  fgets(a, MAXN+1, stdin);
  a[strlen(a)-1]='\0';
  printf("Inserire la seconda stringa\n");
  fgets(b, MAXN+1, stdin);
  b[strlen(b)-1]='\0';

  if (strlen(a)<strlen(b)) {
    printf("Errore: la stringa %s e' maggiore di %s\n", b,a);
  }

  for (size_t i = 0; i < strlen(a); i++) {
    for (size_t j = 0; j < strlen(b); j++)
      if (a[i+j]==b[j])
        cnt++;

    if (cnt==strlen(b)) {
      for (size_t j = 0; j < strlen(b); j++)
        a[i+j]='*';
    }
    cnt=0;
  }
  printf("%s\n", a);



  return 0;
}
