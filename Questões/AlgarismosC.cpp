#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
   int numsort, i, v[10];
   for(i=0;i<10;i++){
       v[i]=0;
   }
   for(i=0; i<15; i++){
       scanf("%d", &numsort);
       v[numsort]++;
   }
   for(i=0;i<10;i++){
       printf("\nNumero %d: %d vez(es)\n\n", i, v[i]);
   }
   system("PAUSE");
   return 0;
}
