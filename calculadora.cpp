#include <stdio.h>

int main(){
int a,b;
char c;

scanf("%d %d %c",&a,&b,&c);
 
if("b=0"){
    
switch(c){
case '+': printf("%d",a+b);
break;
    
case '-': printf("%d",a-b);
break;
 
case '*': printf("%d",a*b);
break;
 
case '/': printf("invalida");
break;
} 
}

else {
switch(c){
case '+': printf("%d",a+b);
break;
    
case '-': printf("%d",a-b);
break;
 
case '*': printf("%d",a*b);
break;
 
case '/': printf("%d",a/b);
break;
 
 } 
}
 return 0;
}





