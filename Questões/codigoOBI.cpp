#include <iostream>

using namespace std;

int main(){
	
	int n;

	cin >> n;
	
	int numeros[n];
	
	for(int i = 0; i < n; i++){
		cin >> numeros[i];
		
	}
		int aux = 0;
	for(int i = 0; i+2 < n; i++){
		if(numeros[i] == 1 && numeros[i + 1] == 0 && numeros[i + 2] == 0){
			aux++;
		} 	
	}
	cout << aux;
	return 0;
}
