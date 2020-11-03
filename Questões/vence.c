#include <stdio.h>
int main(){
    int qtd=0,i=0,par=0,impar=0;
    scanf("%d",&qtd);
    int vet[qtd];
    for(i=0;i<=qtd;i++){
        scanf("%d",&vet[i]);
        if(i%2==0){
            par=par+i;
        }
        else{
            impar=impar+i;
        }
    }
    if(par>qtd && par>impar){
        printf("soldados");
    }
    else if(par==impar){
        printf("empate");
    }
    else if(par>impar && par>qtd){
         printf("soldados");
    }
    else if(qtd>impar && qtd==par){
        printf("rebeldes");
    }
    else{
        printf("rebeldes");
    }
    
    return 0;
}
