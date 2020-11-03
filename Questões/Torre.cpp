#include <iostream>
#define MAX 1000

using namespace std;

int main(){
	int n, i, j, soma, maior = 0;
	
	cin >> n;
	int torre[n][n], linhas[n], colunas[n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> torre[i][j];
		}
			linhas[i] = 0;
			colunas[i] = 0;
	
	}
	

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			linhas[i] +=  torre[i][j];
			colunas[i] +=  torre[j][i];
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			soma = (linhas[i] + colunas[j]) - (2 * torre[i][j]);
			
			if(soma > maior){
				maior = soma;
			}
		}
	}
	
	cout << maior;
	
	return 0;
}

