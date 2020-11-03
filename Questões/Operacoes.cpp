#include <iostream>

using namespace std;

int main(){
	char letra;
	double n1, n2;
	double res = 0;
	
	cin >> letra;
	cin >> n1 >> n2;
	
	if(letra == 'M'){
		res = n1 * n2;
	}
	else {
		res = n1/n2;
	}
	
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << res << endl;
	
	
	return 0;
}
