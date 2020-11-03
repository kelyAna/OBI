#include <stdio.h>
int main(){
    int j1,j2,j3;
    scanf("%d%d%d",&j1,&j2,&j3);
    //printf("%d\n%d\n%d\n",j1,j2,j3);
    
    if(j1==1 && j2==1 && j3==1){
        printf("empate");
    }
    
    if(j1==1 && j2==0 && j3==0){
        printf("jog1");
    }
    
    if(j1==1 && j2==0 && j3==1){
        printf("jog2");
    }
    
    if(j1==1 && j2==1 && j3==0){
        printf("jog3");
    }
    if(j1==0 && j2==0 && j3==0){
    	printf("empate");
	}
}
