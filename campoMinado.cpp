#include <iostream>

using namespace std;

int main(){
	
	int n;
	int campo[55];
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> campo[i];	
	}
	
	for(int i = 0; i < n; i++){
		int quantidade = 0;
		
		quantidade += campo[i];
		if(i < (n-1)){
		quantidade += campo[i + 1];
	}
		if(i > 0){
			quantidade += campo[i - 1];
	}
		cout << quantidade << endl;
	}
	return 0;
}
