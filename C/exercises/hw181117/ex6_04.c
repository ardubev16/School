#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=100,len;
  char a[MAXN+1],b[MAXN+1];

  printf("Inserire la stringa\n");
  fgets(a, MAXN+1, stdin);
  len=strlen(a);
  printf("%s\n", a);

  if (a[0]>='a')
    b[0]=a[0]-32;
  else
    b[0]=a[0];
  for (size_t i = 1; i < len; i++) {
    if (a[i-1]==' ') {
      if (a[i]>='a')
        b[i]=a[i]-32;
      else
        b[i]=a[i];
    } else if (a[i]<='Z' && a[i]!=' ')
      b[i]=a[i]+32;
    else
      b[i]=a[i];
  }
  b[len-1]='\0';

  printf("%s\n", b);

  return 0;
}
