#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  float a,b,c;
  printf("inserire i lati del triangolo\na=");
  scanf("%f",&a);
  printf("b=");
  scanf("%f",&b);
  printf("c=");
  scanf("%f",&c);
  if (a>0 && b>0 && c>0) {
    if (a+b>c && b+c>a && a+c>b) {
      if(a>=fabs(b-c) && b>=fabs(a-c) && c>=fabs(a-b)){

        if (a==b && b==c) {
          printf("Il triangolo e' equilatero\n");
        } else if (a==b || b==c || c==a) {
          printf("Il triangolo e' isoscele\n");
        } else {
          printf("Il triangolo e' scaleno\n");
        }
        if (pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(b,2)) {
          printf("Il triangolo e' rettangolo\n");
        }
      }
      else
        printf("Errore: triangolo inesistente\n");
    }
    else
      printf("Errore: triangolo inesistente\n");
  }
  else
    printf("Errore: lati negativi\n");

  return 0;
}
