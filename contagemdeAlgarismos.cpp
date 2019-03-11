#include <iostream>
#include<math.h>

using namespace std;

int main(){
  	
  	int n;
  	cin >> n;
  	string numeros;
  	int z = 0, u = 0, d = 0, t = 0, q = 0;
	int c = 0, s = 0, se = 0, o = 0, no = 0;
 	
 	for(int i = 0; i < n; i++){
 		getline(cin, numeros);
 		cin >> numeros;
 		for(int j = 0; j < numeros.size(); j++){
 			if(numeros[j] == '0'){
 				z++;
			 }
			 if(numeros[j] == '1'){
 				u++;
			 }
			 if(numeros[j] == '2'){
 				d++;
			 }
			 if(numeros[j] == '3'){
 				t++;
			 }
			 if(numeros[j] == '4'){
 				q++;
			 }
			 if(numeros[j] == '5'){
 				c++;
			 }
			 if(numeros[j] == '6'){
 				s++;
			 }
			  if(numeros[j] == '7'){
 				se++;
			 }
			  if(numeros[j] == '8'){
 				o++;
			 }
			  if(numeros[j] == '9'){
 				no++;
			 }
			 
		 }
	 }
	 cout << 0 << " - " << z << endl;
	 cout << 1 << " - " << u << endl;
	 cout << 2 << " - " << d << endl;
	 cout << 3 << " - " << t << endl;
	 cout << 4 << " - " << q << endl;
	 cout << 5 << " - " << c << endl;
	 cout << 6 << " - " << s << endl;
	 cout << 7 << " - " << se << endl;
	 cout << 8 << " - " << o << endl;
	 cout << 9 << " - " << no << endl;
	 
 	
   return 0;
}

