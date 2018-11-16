#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=24,len,check,b=0;
  char a[MAXN+1];

  do {
    check=0;
    printf("Inserire il numero binario\n");
    fgets(a, MAXN+1, stdin);
    len=strlen(a);
    for (size_t i = 0; i < len-1; i++)
      if (a[i]!='1' && a[i]!='0')
        check=1;
  } while(check);

  for (size_t i = 0; i < len-1; i++) {
    if (a[i]=='1')
      b=b*2+1;
    else
      b*=2;
  }

  printf("%d\n", b);

  return 0;
}
