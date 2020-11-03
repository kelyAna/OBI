#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double base, expoente;
	
	cin >> base >> expoente;
	
	
	std::cout.precision(4);
	cout << std::fixed << pow(base, expoente);
	
	return 0;
}
