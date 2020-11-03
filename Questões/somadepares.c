#include <stdio.h>
int main(){
     int A,B,soma=0,i;
    scanf("%d%d",&A,&B);
    for(i=A;i<=B;i++){
    	if(i%2==0){
    		soma=soma+i;
		}
	}
	printf("%d",soma);
}

