#include <iostream>


using namespace std;

int main(){
	string text;
	
	cin >> text;
	
	for(int i = 0;i<(int)text.size();i++){
		if(i%2==0){ //maisculo
			if((text[i]>= 'a') and (text[i] <= 'z')){
				text[i] -= 32;
			}
		}else{
			if((text[i]>= 'A') and (text[i] <= 'Z')){
				text[i] += 32;
			}
		}
	}

	cout << text << endl;
	
	return 0;
}
