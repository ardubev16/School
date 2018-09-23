#include <iostream>

int main(int argc, char const *argv[]) {
  int a;
  printf("Inserire il mese:");
  scanf("%d",&a);
  if (a==1) {
    printf("Gennaio\n");
  } else if (a==2) {
    printf("Febbraio\n");
  } else if (a==3) {
    printf("Marzo\n");
  } else if (a==4) {
    printf("Aprile\n");
  } else if (a==5) {
    printf("Maggio\n");
  } else if (a==6) {
    printf("Giugno\n");
  } else if (a==7) {
    printf("Luglio\n");
  } else if (a==8) {
    printf("Agosto\n");
  } else if (a==9) {
    printf("Settembre\n");
  } else if (a==10) {
    printf("Ottobre\n");
  } else if (a==11) {
    printf("Novembre\n");
  } else if (a==12) {
    printf("Dicembre\n");
  } else {
    printf("Errore: mese non valido\n");
  }
  return 0;
}
