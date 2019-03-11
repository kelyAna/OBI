#include<stdio.h>
#include<conio.h>

	int main(void){

	char Matriz[3][3];
	char O='O', X='X';
	int l=0,j,i;

		for(i=0;i<3;i++){
  			for(j=0;j<3;j++)
				Matriz[i][j]=' ';
			}		
      while(l<=9)
        {
        for(i=0;i<3;i++)
        {
            printf("\t\t     %c \xBA %c \xBA %c\n",Matriz[i][0],Matriz[i][1],Matriz[i][2]);
            if(i<3-1)
            {
                printf("\t\t    ÍÍÍ\xCEÍÍÍ\xCEÍÍÍ\n");
            }
        }

if(l%2){ //identifica de quem é a jogada //causar a impressão de que limpou a tela
printf(&quot;COMM \n\n&quot;);
}else{
printf(&quot;PLAYER 1 \n&quot;);
printf(&quot;\nLINHA: &quot;);
scanf(&quot;%d&quot;,&i); // realiza a leitura da linha
printf(&quot;COLUNA: &quot;);
scanf(&quot;%d&quot;,&j); // realiza a leitura da coluna
}

if(Matriz[i-1][j-1]==' '){ //identifica se a ultima jogada foi realizada corretamente para incrementar o contador e inserir o valor
if(l%2){
if(Matriz[1][1]==O && Matriz[2][0]==' ') Matriz[2][0]=X;
if(Matriz[0][2]==O && Matriz[0][0]==' ') Matriz[0][0]=X;
if(Matriz[1][0]==O && Matriz[1][2]==' ') Matriz[1][2]=X;
if(Matriz[0][1]==O && Matriz[2][1]==' ') Matriz[2][1]=X;
if(Matriz[2][1]==O && Matriz[0][1]==' ') Matriz[0][1]=X;
}else
Matriz[i-1][j-1]=O;
}

l++;

if((Matriz[0][0]==O && Matriz[0][1]==O && Matriz[0][2]==O)||
(Matriz[1][0]==O && Matriz[1][1]==O && Matriz[1][2]==O)||
(Matriz[2][0]==O && Matriz[2][1]==O && Matriz[2][2]==O)||
(Matriz[0][0]==O && Matriz[1][0]==O && Matriz[2][0]==O)||
(Matriz[0][1]==O && Matriz[1][1]==O && Matriz[2][1]==O)||
(Matriz[0][2]==O && Matriz[1][2]==O && Matriz[2][2]==O)||
(Matriz[0][0]==O && Matriz[1][1]==O && Matriz[2][2]==O)||
(Matriz[0][2]==O && Matriz[1][1]==O && Matriz[2][0]==O)){
printf(&quot;\n\a\t\tJogador 1, VOCE VENCEU!!!&quot;);//formata a saida do vencedor centralizado e com um bipe /a
break;
}

if((Matriz[0][0]==X && Matriz[0][1]==X && Matriz[0][2]==X)||
(Matriz[1][0]==X && Matriz[1][1]==X && Matriz[1][2]==X)||
(Matriz[2][0]==X && Matriz[2][1]==X && Matriz[2][2]==X)||
(Matriz[0][0]==X && Matriz[1][0]==X && Matriz[2][0]==X)||
(Matriz[0][1]==X && Matriz[1][1]==X && Matriz[2][1]==X)||
(Matriz[0][2]==X && Matriz[1][2]==X && Matriz[2][2]==X)||
(Matriz[0][0]==X && Matriz[1][1]==X && Matriz[2][2]==X)||
(Matriz[0][2]==X && Matriz[1][1]==X && Matriz[2][0]==X)){
printf(&quot;\n\n\n\n\a\t\tJogador 2, VOCE VENCEU!!!&quot;);//formata a saida do vencedor centralizado e com um bipe /a
break;
}

if(l==9){ // se o contador de jogadas atingir o valor máximo indica que ninguem conseguiu completar 3 jogadas seguidas
printf(&quot;PARTIDA EMPATADA&quot;);
break;
}

}
getch(); // ele para o programa até que seja clicado em qualquer botao para prosseguir, efeito de compilação
return(0);
}

