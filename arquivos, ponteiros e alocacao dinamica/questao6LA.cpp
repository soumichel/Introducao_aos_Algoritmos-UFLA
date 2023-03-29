#include <iostream>
#include <fstream>
using namespace std;

double phi(int x){
	double aureo;
    
    if (x == 1){
        aureo = 1;
    } else {
        aureo = 1 + (1 / phi (x - 1));
    }
    
	ofstream file("phi.txt", ios_base::app);
	file << aureo << endl;
	file.close();
	return aureo;
}

int main(){
	int numAureo;
    cin >> numAureo;
    
	double calc = phi(numAureo);
	cout << calc;
}
