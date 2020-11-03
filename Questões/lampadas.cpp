#include <iostream>

using namespace std;


int main(){
  int qtd;
  int A = 0, B = 0;
  
  
  cin >> qtd;
  
  for(int i = 0; i < qtd; i++){
  	int inter;
  	
  	cin >> inter;
  	
  	if(inter == 1){
  		A = 1 - A;
	  }
	else{
		A = 1 - A;
		B = 1 - B;
	}
	
  }
  cout << A << endl;
  cout << B << endl;

return 0;
}
