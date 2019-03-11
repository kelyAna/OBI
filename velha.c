#include<stdio.h>

int main(){
     char a[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf(" %c",&a[i] [j]);
        }
    }     

        if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!='V')printf("%c",a[1][1]);
        else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!='V') printf("%c",a[0][2]);
        else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[0][0]!='V') printf("%c",a[0][0]);
        else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[0][1]!='V') printf("%c",a[1][1]);
        else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[0][2]!='V') printf("%c",a[0][2]);
        else if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][0]!='V') printf("%c",a[0][0]);
        else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][0]!='V') printf("%c",a[1][0]);
        else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][0]!='V') printf("%c",a[2][1]);
        else printf("deu velha");
        
}
