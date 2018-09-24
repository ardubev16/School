#include <iostream>

int main(int argc, char const *argv[]) {
  float a,b;
  int op;
  printf("Inserire l'operazione:\n1. addizione\n2. sottrazione\n3. moltiplicazione\n4. divisione\n");
  scanf("%d",&op);
  printf("Inserire i due operandi\na=");
  scanf("%f",&a);
  printf("b=");
  scanf("%f",&b);
  if (op==1) {
    printf("%f\n",a+b);
  } else if (op==2) {
    printf("%f\n",a-b);
  } else if (op==3) {
    printf("%f\n",a*b);
  } else if (op==4) {
    printf("%f\n",a/b);
  } else {
    printf("Errore: operazione non valida");
  }
  return 0;
}
