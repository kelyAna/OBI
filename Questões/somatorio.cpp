#include <stdio.h>
int main(){
    int A,B,i=0,soma=0;
    scanf("%d%d",&A,&B);
    for(i=A;i<=B;i++){
        if(i%3==0 && i%2==0){
            soma=soma+i;
        }
        printf("%d",soma);
    }
    if(B<A){
            printf("invalido");
        }
    return 0;
}
