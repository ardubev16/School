#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=30,len,cnt=0;
  char a[MAXN+1];

  printf("Inserire la stringa\n");
  fgets(a, MAXN+1, stdin);
  len=strlen(a);
  a[len-1]='\0';
  printf("%s\n", a);

  for (size_t i = 0; i < len-1; i++)
    if (a[i]<='Z' && a[i]>='A')
      a[i]=a[i]+32;

  for (size_t i = 0; i < len/2; i++)
    if (a[i]==a[len-2-i])
      cnt++;

  if (cnt==len/2)
    printf("%s e' una parola palindroma\n", a);
  else
    printf("%s non e' una parola palindroma\n", a);

  return 0;
}
