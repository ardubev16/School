#include <stdio.h>

void vis(unsigned int n,unsigned int a[]){
  for(int i=0; i<n; i++)
    printf("%u ",a[i]);
  printf("\n");
}

void decrescente(unsigned int a[],unsigned int n){
  int max_idx,tmp;
  for(int i=0; i<n; i++){
    max_idx=i;
    for(int j=i; j<n; j++){
      if(a[j]>a[max_idx]){
        max_idx=j;
      }
    }
    tmp=a[i];
    a[i]=a[max_idx];
    a[max_idx]=tmp;
  }
}

int main(){
  unsigned int a[30],n;
  do{
    printf("Inserire il numero di elementi: ");
    scanf("%u", &n);
  }while(n<=0 || n>30);
  for(int i=0; i<n; i++)
    scanf("%u", &a[i]);
  decrescente(a, n);
  vis(n, a);

  return 0;
}
