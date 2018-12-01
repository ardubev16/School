#include <stdio.h>
#include <string.h>

void toUp(char a[]){
	for(int i=0; i<strlen(a)-1; i++)
		if(a[i]>='a')
			a[i]-=32;
}
void lett(char a[], int l[]){
	for(int i=0; i<26; i++)
		for(int j=0; j<strlen(a)-1; j++)
			if(a[j]=='A'+i)
				l[i]++;
}
void vis(int l[]){
	for(int i=0; i<26; i++)
		printf("%c= %2d\n",'A'+i,l[i]);
}

int main(){
	char a[101];
	int l[26];
	for(int i=0; i<26; i++)
		l[i]=0;
	printf("Inserire il testo (massimo 100 caratteri): ");
	fgets(a,101,stdin);
	toUp(a);
	lett(a,l);
	vis(l);
	
	return 0;
}
