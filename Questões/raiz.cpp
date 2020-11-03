#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		double num;
		cin >> num;
		
		std::cout.precision(4);
		cout << std::fixed << sqrt(num) << " " << endl;
		
	
	}
	
	return 0;
}
