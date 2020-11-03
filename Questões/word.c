 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 
 int main(){
     char texto[100],letra,x;
     int i=0;
     fgets(texto,sizeof(texto),stdin);
     scanf("%c",&letra);
     for(i=0;i<strlen(texto);i++){
        if(letra=='M'){
          texto[i]=toupper(texto[i]);
          printf("%c",texto[i]);
         }
        else if(letra=='m'){
        texto[i]=tolower(texto[i]);
         printf("%c",texto[i]);
        }
        else if(letra=='p'){
             if((texto[i]>='a' && texto[i]<='z') && (texto[i-1]==' ') && (texto[i+1]>='a' && texto[i+1]<='z')){
                 texto[i]=toupper(texto[i]);
                 printf("%c",texto[i]);
             } else if((texto[i]>='A' && texto[i]<='Z') && i==0){
                 texto[i]=tolower(texto[i]);
                 printf("%c",texto[i]);
             }
             else{
                  printf("%c",texto[i]);
             }
         } else if(letra=='i'){
             if(texto[i]>='a' && texto[i]<='z'){
                 texto[i]=toupper(texto[i]);
                 printf("%c",texto[i]);
             }else if(texto[i]>='A' && texto[i]<='Z'){
                 texto[i]=tolower(texto[i]);
                 printf("%c",texto[i]);
             }
             else{
                  printf("%c",texto[i]);
             }
         }
      }
      printf("\n");
     }
