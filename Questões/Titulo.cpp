#include <iostream>

using namespace std;

string title(string F){

   for(int i = 0; i < F.size(); i++){	
    	  F[i] |= (1<<5);      
			   if(!i || F[i - 1] == ' ')   
			            F[i] &= ~(1<<5); 
			        }
   	return F;  
   	
}


int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}
