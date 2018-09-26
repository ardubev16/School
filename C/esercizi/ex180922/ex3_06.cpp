#include <iostream>

int main(int argc, char const *argv[]) {
  float a,b;
  printf("Immettere i valori di a, b dell'equazione ax+b=0\na=");
  scanf("%f",&a);
  printf("b=");
  scanf("%f",&b);
  printf("x=%f\n",-b/a);

  return 0;
}
