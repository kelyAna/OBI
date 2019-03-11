#include <iostream>

using namespace std;


int main(){
   int N;
   int cont = 0;
   int i;
   
   cin >> N;
   
   for(i = 1; i <= N; i++){
   		int A;
   		cin >> A;
		cont +=A;
		
		if(cont >= 1000000){
			break;
		}

   }
   cout << i;
 
return 0;
}
