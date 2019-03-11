#include<stdio.h>
int main (){
    int x, i, z, j, soma = 0,aux = 0;
    scanf("%d",&x);
    int vetor[x];
    for (i=0;i<x;i++){
        scanf("%d",&vetor[i]);
    }
        scanf("%d", &z);    
        for(i=0 ; i<x ; i++){
              for(j=i+1 ; j<x ; j++){
                if (vetor [j] + vetor[i] == z){
                soma = vetor[j] + vetor[i];
                break;
            }
        }
    }
    if (soma == z){
        printf("sim");
    }
    else {
        printf("nao");
    }
}
