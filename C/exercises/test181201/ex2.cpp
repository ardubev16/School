#include <stdio.h>
#include <string.h>

void decrypt(char a[]){
	for(int i=0;i<strlen(a)-1;i++)
		a[i]=a[i]-5;
}

int main(){
	char a[101];
	printf("Inserire il testo cryptato (massimo 100 caratteri): ");
	fgets(a,101,stdin);
	decrypt(a);
	printf("%s", a);
	
	return 0;
}
