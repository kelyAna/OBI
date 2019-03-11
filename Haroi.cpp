#include <iostream>

using namespace std;

int hanoi(int n){
	if(n <= 1){
		return 1;
} 	
		return (2*hanoi(n-1)) + 1;
	
}

int main(){
		int n, i = 1;
		while(cin >> n){
			if(n == 0){
				break;
			}
			cout << "Teste " << i << endl;
			cout << hanoi(n) << endl;
			cout << endl;
			i += 1;
		}
 }



   
   
