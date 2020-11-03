#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
		double alturaPessoa, anguloGraus,distancia;
		
		cin >> alturaPessoa;
		cin >> anguloGraus;
		cin >> distancia;
		
		double anguloRad = (anguloGraus*3.14)/180;
		
		double alturaFinal = alturaPessoa + tan(anguloRad)*1000;
		
		
		cout.precision(2);
		cout << fixed;
		cout << alturaFinal << endl;
	
	
	
	
	return 0;
}
