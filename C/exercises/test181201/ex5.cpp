#include <stdio.h>
#include <string.h>

void invert(char a[]){
	char tmp;
	for(int i=1; i<strlen(a)/2; i++){
		tmp=a[i];
		a[i]=a[strlen(a)-2-i];
		a[strlen(a)-2-i]=tmp;
	}
}

int main(){
	char a[101];
	printf("Inserire la stringa (massimo 100 caratteri): ");
	fgets(a,101,stdin);	
	printf("%s",a);
	invert(a);
	printf("%s",a);
	
	return 0;
}
