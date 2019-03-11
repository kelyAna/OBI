#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int p;
	cin >> p;
	char sinal;
	cin >> sinal;
	int p2;
	cin >> p2;
	int res = 0;
	
	if(sinal == '+'){
		 res = p + p2;
	}
	if(sinal == '*'){
		res = p * p2;
	}
	
	if(res > n){
		cout << "OVERFLOW";
	}
	else{
		cout << "OK";
	}
	return 0;
}
