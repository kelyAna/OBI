#include <stdio.h>
#include <string.h>

int main(){  
  int i;   
  char frase[20];   
   printf("Escreva a frase: "); 
   scanf("%[^\n]", frase);  
   
 for(i = 0; i < strlen(frase); i++){   
		     frase[i] |= (1<<5);      
			   if(!i || frase[i - 1] == ' ')   
			            frase[i] &= ~(1<<5); 
						   }   
						    printf("\nFrase convertida = %s\n", frase);  
				  return 0;}

