#include <stdio.h>

int main(){
    
    int qtd,tamanho,grito,i=0;
    scanf ("%d", &qtd);
    for(int aux=0;aux<qtd;aux++){
        scanf("%d %d",&tamanho,&grito);
    
    int vet[tamanho];
    
    for(i=0;i<tamanho;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<tamanho;i++){
        if(vet[i]==grito){
            if(i-1>=0){
            vet[i-1]=(-vet[i-1]);
            }
            if(i+1<=tamanho+1){
                vet[i+1]=(-vet[i+1]);
        }
        }
    }
     for(i=0;i<tamanho-1;i++){
       printf("%d ",vet[i]);
    }
    printf ("%d", vet[tamanho-1]);
    printf("\n");
    }
   
}

