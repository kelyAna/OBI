#include <stdio.h>
int main(){
    int D,M,A;
    scanf("%d%d%d",&D,&M,&A);
    
    if(A/100 && A==2000 && M!=8){
        printf("invalida");
    }
   else if(D==30 && M==2 && A==2016){
    	printf("invalida");
	}
	else if(D==29 && M==2 && A==2018){
    	printf("invalida");
	}
	else if(D==29 && M==2 && A==1900){
    	printf("invalida");
	}
   else{
        printf("valida");
    }
   return 0;
}
