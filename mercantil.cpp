#include <stdio.h>

int main (){
	int n, cont = 1, cont2 = 0;
 	
 	scanf("%d", &n);
	
	int tazos[n];
    	
	for(int i = 0; i < n; i++){
        scanf("%d", &tazos[i]);
        if (tazos[i] == tazos[i - 1]){
            cont++;    
        }else{
            cont = 1;
        }
        if(cont > cont2){
            cont2 = cont;
        }	
            
    }
    
	cont = 1;
	
    for(int i = 1; i < n; i++){
        if(tazos[i] == tazos[i - 1]){
            cont++;
        }else{
            cont = 1;
        }
        if(cont == cont2){
            printf("%d ",tazos[i]);
        }
}
}
