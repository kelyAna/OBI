#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int vet[100005];
	int n, cont = 0;
	int A = 0, B = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> vet[i];	
	}
	sort(vet, vet+n);
		for(int i = 0; i < n; i++){
			B = vet[i];
	}
	cout << cont;
	
	
	return 0;
}
