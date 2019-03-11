#include <stdio.h>
#include <math.h>

int main(){
	int num;
	
	scanf("%d",&num);
	
	if((num%2)==0){
		int raiz = sqrt(num);
		printf("%d",raiz);
	}
	else{
		printf("%d",num*num);
	}
	
	
}
