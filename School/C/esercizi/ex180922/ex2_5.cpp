#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
  float D, Aq,Ac,At;
  printf("D=");
  scanf("%f",&D);
  Aq=pow(D,2);
  Ac=M_PI*pow((D/2),2);
  At=D*(D/2*sqrt(3)/2);
  printf("Area quadrato lato D=%f\n",Aq);
  printf("Area cerchio diametro D=%f\n",Ac);
  printf("Area triangolo equilatero lato D=%f\n",At);

  return 0;
}
