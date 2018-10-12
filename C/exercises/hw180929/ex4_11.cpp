#include <iostream>

void caso1(int l){
  for (int i = l; i > 0; i--) {
    for (int j = l; j > 0; j--) {
      printf("* ");
    }
    printf("\n");
  }
}

void caso2(int l){
  for (int i = l; i > 0; i--) {
    if (i==l || i==1) {
      for (int j = l; j > 0; j--) {
        printf("* ");
      }
    } else {
      printf("* ");
      for (int j = l-2; j > 0; j--) {
        printf("  ");
      }
      printf("* ");
    }
    printf("\n");
  }
}

void caso3(int l){
  int k=1;
  for (int i = l; i > 0; i--) {
    for (int j = 0; j < k; j++) {
      printf("* ");
    }
    k++;
    printf("\n");
  }
}

void caso4(int l){
  int k=1;
  for (int i = l; i > 0; i--) {
    for (int j = 0; j < k; j++) {
      printf("* ");
    }
    for (int j = 0; j < l-k; j++) {
      printf("+ ");
    }
    k++;
    printf("\n");
  }
}

int main(int argc, char const *argv[]) {
  int l,t;
  printf("Inserire la lunghezza del lato\nl=");
  scanf("%d",&l);
  printf("Inserire il tipo di disegno da visualizzare (1, 2, 3, 4)\ntipo=");
  scanf("%d",&t);
  switch (t) {
    case 1:caso1(l); break;
    case 2:caso2(l); break;
    case 3:caso3(l); break;
    case 4:caso4(l);
  }

  return 0;
}
