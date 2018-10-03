#include <iostream>

int main(int argc, char const *argv[]) {
  int m,g;
  do {
    printf("Inserire il mese: ");
    scanf("%d", &m);
  } while(m<1 || m>12);
  if (m==4||6||9||11) {
    do {
      printf("Inserire il giorno: ");
      scanf("%d",&g);
    } while(g<1||g>30);
  } else if (m==2) {
    do {
      printf("Inserire il giorno: ");
      scanf("%d",&g);
    } while(g<1||g>28);
  } else {
    do {
      printf("Inserire il giorno: ");
      scanf("%d",&g);
    } while(g<1||g>31);
  }
  switch (m) {
    case 12:g+=30;
    case 11:g+=31;
    case 10:g+=30;
    case 9:g+=31;
    case 8:g+=31;
    case 7:g+=30;
    case 6:g+=31;
    case 5:g+=30;
    case 4:g+=31;
    case 3:g+=28;
    case 2:g+=31;
  }
  printf("Giorno numero %d\n",g);
  return 0;
}
