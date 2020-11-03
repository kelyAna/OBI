#include <stdio.h>

int main(){

	int altura;
	int area;
	int base;
	
	printf("Digite o valor da base:");
	scanf("%d", &base);
	
	printf("Digite o valor da altura:");
	scanf("%d", &altura);
	
	area = base * altura;
	printf("O valor da area eh: = %d\n", area);
	system("PAUSE");
	return 0;
}
