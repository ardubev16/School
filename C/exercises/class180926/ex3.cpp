#include <iostream>

int cell(int a){
  char *pa=(char*)&a;
  printf("Indirizzi del numero e corrispettivi valori:\n");
  for (int i = 0; i<sizeof(a); i++) {
    printf("%d %d\n",pa+i, *(pa+i));
  }
}

int main(int argc, char const *argv[]) {
  int a;
  printf("Inserire il numero di cui visualizzare le celle di memoria\nn=");
  scanf("%d",&a);
  cell(a);
  return 0;
}
