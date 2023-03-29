#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	float alturaDegrau;
	cin >> alturaDegrau;
	float alturaDesejada;
	cin >> alturaDesejada;
	float degrausEstimados = ((alturaDesejada * 100) / alturaDegrau);
	cout << ceil(degrausEstimados) << endl;
return 0;
}
