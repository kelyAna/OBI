#include <iostream>

using namespace std;

int main(){
	
	int H, P, F, D;
	
	cin >> H >> P >> F >> D;
    
    while(F != P and (F!=H) ){
    	
    	 F = F + D; //altera primeiro o valor
    	
    	if( F == -1){ //verifica se eh valido
    		F = 15;
		}
		else if(F == 16){
			F = 0;
		}
	} 
	if (F == H){
		
		cout << "S" << endl;
		
	} else{
		cout << "N" << endl;
	}
		
	return 0;
}
