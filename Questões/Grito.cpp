#include <stdio.h>

int main(){
    
    int aux,tamanho,grito,i=0;
    scanf("%d %d",&tamanho,&grito);
    
    int vet[tamanho],vetor[grito];
    
    for(i=0;i<tamanho;i++){
        scanf("%d",&vet[i]);
    }
    for(aux=0;aux<grito;aux++){
        scanf("%d",&vetor[aux]);
    }
    for(i=0;i<tamanho;i++){
        if(vet[i]==vetor[aux]){
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

