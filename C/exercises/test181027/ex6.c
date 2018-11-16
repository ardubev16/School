#include <stdio.h>

void mcdm(unsigned int a, unsigned int b){
    unsigned int MCD,mcm,d=(a>b)?a:b;
    //MCD
    for(int i=d;;i--){
        if(a%i==0 && b%i==0){
            MCD=i;
            break;
        }
    }
    //mcm
    for(int i=d;;i++){
        if(i%a==0 && i%b==0){
            mcm=i;
            break;
        }
    }
    printf("MCD=%d\nmcm=%d",MCD,mcm);
}

int main(){
    unsigned int a,b;
    printf("Inserire a: ");
    scanf("%u",&a);
    printf("Inserire b: ");
    scanf("%u",&b);
    mcdm(a,b);

    return 0;

}
