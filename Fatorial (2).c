#include <stdio.h>
int main(){
    unsigned long long int n,f;
   
    scanf("%llu",&n);
    
    for(f=1;n>=1;n=n-1){
        f=f*n;
    }
    printf("%llu",n);
    
}
