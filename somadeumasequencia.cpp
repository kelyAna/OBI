#include <stdio.h>
int main(){
 int a,b,i,cont=0;
 scanf("%d%d",&a,&b);
 while(b!=0){
 	i=b%10;
 	if(i==a){
 		cont++;
	 }
	 b=b/10;
 }
 printf("%d",cont);
}

