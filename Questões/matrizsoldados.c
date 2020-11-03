#include <stdio.h>
int main(){
    int matriz[3][3];
    int i,j,cont=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j] < matriz[i-1][j]){
                cont++;
            }
     }
    } 
    printf("%d",cont);
}

