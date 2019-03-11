#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	
	if ((a/b) %2==0) 	printf("%d eh par!\n", a/b);
	else printf("%d eh impar\n",a/b);
	
	return 0;
		
}
	
	//a%2==0 printf("%d eh par!\n",a);
	// : printf("%d eh impar",a);

