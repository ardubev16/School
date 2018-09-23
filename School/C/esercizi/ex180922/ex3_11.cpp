#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  float a,b,c, delta;
  printf("Immettere i valori di a, b, c dell'equazione ax^2+bx+c=0\na=");
  scanf("%f",&a);
  printf("b=");
  scanf("%f",&b);
  printf("c=");
  scanf("%f",&c);
  if (a==0) {
    printf("a=0, si risolve come una comune equazione di primo grado\nx=%f\n",-c/b);
  } else if(b==0 && c==0){
    printf("%fx^2=0 e' un equazione di secondo grado monomia\nx=0\n",a);
  } else if(b==0){
    if ((c<0 && a<0) || (c>0 && a>0)) {
      printf("Errore: a e c concordi");
    } else {
      printf("%fx^2+%f=0 e' un equazione di secondo grado pura\nx=%f, %f\n",a,c, sqrt(-c/a), -sqrt(-c/a));
    }
  } else if(c==0){
    printf("%fx^2+%fx=0 e' un equazione di secondo grado spuria\nx=0, %f\n",a,b, -b/a);
  } else{
    delta=pow(b,2)-4*a*c;
    if (delta<0) {
      printf("Errore: delta<0\n");
    } else {
      printf("%fx^2+%fx+%f=0 e' un equazione di secondo grado\nx=%f, %f\n",a,b,c, -b+sqrt(delta)/(2*a), -b-sqrt(delta)/(2*a));
    }
  }

  return 0;
}
