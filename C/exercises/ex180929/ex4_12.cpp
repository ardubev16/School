#include <iostream>

int main(int argc, char const *argv[]) {
  int l,k=1,n=1;
  printf("Inserire il lato del triangolo di Floyd\nl=");
  scanf("%d",&l);
  for (int i = l; i > 0; i--) {
    for (int j = 0; j < k; j++) {
      printf("%d ",n);
      n++;
    }
    k++;
    printf("\n");
  }
  return 0;
}
