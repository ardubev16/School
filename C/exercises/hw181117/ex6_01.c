#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int MAXN=100,cnt=0,voc=0,con=0;
  char a[MAXN+1];

  printf("Inserire la stringa\n");
  fgets(a, MAXN+1, stdin);

  for (size_t i = 0; i < 26; i++) {
    for (size_t j = 0; j < strlen(a); j++) {
      if (a[j]==65+i || a[j]==97+i)
        cnt++;
      if(i==0){
        if (a[j]=='A' || a[j]=='a' || a[j]=='E' || a[j]=='e' || a[j]=='I' || a[j]=='i' || a[j]=='O' || a[j]=='o' || a[j]=='U' || a[j]=='u')
          voc++;
        else
          con++;
      }
    }
    printf("%c(%d)\n", (char)i+65, cnt);
    cnt=0;
  }
  printf("vocali=%d\nconsonanti=%d\n",voc,con);

  return 0;
}
