#include <iostream>

using namespace std;

int main(){
	
	int N, L, C;
	int cont = 0;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> L >> C;
		int D = L - C;
	
		if(D > 1){
			cont = cont + 1;
				cout << cont;
		}	
	}
	

	return 0;
}
