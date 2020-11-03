#include <stdio.h>
 int main(){
     int N=0,i=0,ordem=0;
     char d='n';
     scanf("%d",&N);
     int vet[N];
     
     for(i=0;i<N;i++){
         scanf("%d",&vet[i]);
     }
     ordem=vet[0];
     for(i=0;i<N;i++){
       if(vet[i]>=ordem) ordem=vet[i];
       else ordem=d;
     }
     
     if(ordem==d){
        printf("precisa de ajuste");
     }
     else{
         printf("ok");
         
     }
        
     return 0;
 }
