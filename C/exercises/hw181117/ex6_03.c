#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=100,len,cnt=0;
  char a[MAXN+1],b[MAXN+1];

  printf("Inserire la stringa\n");
  fgets(a, MAXN+1, stdin);
  len=strlen(a);
  printf("%s\n", a);

  for (size_t i = 0; i < len; i++) {
    if (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
      b[cnt]=a[i];
      cnt++;
      b[cnt]='F';
    } else if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
      b[cnt]=a[i];
      cnt++;
      b[cnt]='f';
    } else
      b[cnt]=a[i];
    cnt++;
  }
  b[len]='\0';

  printf("%s\n", b);

  return 0;
}
