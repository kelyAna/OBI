#include <iostream>

using namespace std;

int main(){
	int vet[5] = {4,1,2,5,3};
	
	//bubble sort
	
	int ordenado = 0;
	
	while(ordenado == 0){
		ordenado = 1;
		for(int i = 0; i < 4; i++){
			if(vet[i] > vet[i + 1]){
				ordenado = 0;
				int aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}
	for(int i = 0; i < 5; i++){
		
		cout << vet[i] << endl;
	}
	
	
	return 0;
}
