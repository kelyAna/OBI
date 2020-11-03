#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char x,aux;
    int num=0;
    scanf("%c %d",&x,&num);
    aux = x + num;
    if(aux < x){
        printf("%c ",'z' + (num - 1));
    }
    else if(aux > x){
        printf("%c ",'a' + (num + 1));
    }
    else{
    	printf("%c ",x);
	}
}
