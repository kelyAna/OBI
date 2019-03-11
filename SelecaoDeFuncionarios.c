#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	
	char sexo;
	int idade;
	
	scanf("%s",sexo);
	scanf("%d",&idade);
	
	if(sexo="f"){
      if(idade<=25){
        printf("ACEITA!");
    }else{
        printf("NAO ACEITA!");
    }
    }else{
    printf("NAO ACEITA!");
    }
}
