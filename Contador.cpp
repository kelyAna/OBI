#include <stdio.h>
int main(){
    int n,i,aux;
    printf("Tamanho do vetor: ");
    scanf("%d",&n);
    int V[n];

    for(i=0; i<n; i++){
        scanf("%d",&V[i]);
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(V[j]>V[j+1]){
                aux=V[j];
                V[j]=V[j+1];
                V[j+1]=aux;
            }
        }
    }
    for(i=0; i<n; i++){
            printf("%d",V [i]);
    }

}
