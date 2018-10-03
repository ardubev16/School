#include <iostream>

int main(int argc, char const *argv[]) {
  int x,y,op;
  do {
    printf("Inserire i valori x e y\nx=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
  } while((x<-100 || x>100 || x==-1) && (y<-100 || y>100 || y==0));
  printf("Inserire l'operazione da eseguire:\n1. 2x+y\n2. x^2+3xy+y^2\n3. x/y\n4. x/(x+1)\n");
  scanf("%d",&op);
  switch (op) {
    case 1:printf("%d\n",2*x+y); break;
    case 2:printf("%d\n",x*x+3*x*y+y*y); break;
    case 3:printf("%f\n",(float)x/y); break;
    case 4:printf("%f\n",(float)x/(x+1)); break;
    default:printf("Operazione invalida\n");
  }
  return 0;
}
