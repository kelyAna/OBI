#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	
	char nome[50];
	char s;
	int idade;
	
	fgets(nome,sizeof(nome),stdin);
	scanf("%s",s);
	scanf("%d",&idade);
	
	if(s=='feminino' && idade<25){
		printf("ACEITA");
	}
	else{
		printf("NAO ACEITA");
	}
}
