#include <stdio.h>
#include <string.h>

void val(int *a, int n){
	do{
		printf("Inserire il valore minore di %d: ", n);
		scanf("%d", a);
	}while(*a>=n);
}
void swap(char s[], int a){
	char tmp;
	tmp=s[a];
	s[a]='\0';
	printf("%s\n",s);
	s[a]=tmp;
}
int main(){
	char s[101];
	int a,b,c;
	printf("Inserire il testo (massimo 100 caratteri): ");
	fgets(s,101,stdin);
	val(&a, 10);
	val(&b, 7);
	val(&c, 5);
	swap(s,a);
	swap(s,b);
	swap(s,c);
		
	return 0;
}
