#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int cont = 0;
	string gabarito;
	cin >> gabarito;
	string aluno;
	cin >> aluno;
	for(int i = 0; i < gabarito.size(); i++){
		if(gabarito[i] == aluno[i]){
			cont++;
		}
	}
	
	cout << cont;
	
	return 0;
}

