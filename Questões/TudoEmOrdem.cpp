#include <stdio.h>
     int main(){
         int qtd,i=0;
		 //cont=0;
         //char d='o';
         scanf("%d",&qtd);
         int vet[qtd];
         for(i=0;i<qtd;i++){
             scanf("%d",&vet[i]);
         }
        //int a=vet[0];
        //for(i=0;i<qtd;i++){
            if(vet[i]>=vet[i+1]){
            printf("nao");
        } 
          else if(vet[i]<vet[i+1]){
            printf("sim");
        }
    // }
    return 0;
    }
