#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=30;
  char a[MAXN+1],b[MAXN+1];

  printf("Inserire la prima stringa\n");
  fgets(a, MAXN+1, stdin);
  a[strlen(a)-1]='\0';
  printf("Inserire la seconda stringa\n");
  fgets(b, MAXN+1, stdin);
  b[strlen(b)-1]='\0';
  
  if (strlen(a)<=strlen(b)) {
    if (strstr(b,a)!=NULL)
      printf("%s e' una sottostringa di %s\n", a,b);
    else
      printf("%s non e' una sottostringa di %s\n", a,b);
  } else {
    if(strstr(a,b)!=NULL)
      printf("%s e' una sottostringa di %s\n", b,a);
    else
      printf("%s non e' una sottostringa di %s\n", a,b);
  }

  return 0;
}
