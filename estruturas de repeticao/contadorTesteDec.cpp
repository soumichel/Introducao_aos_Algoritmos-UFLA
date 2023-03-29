#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int cont = num;
    float valor; 
    float soma = 0;
    while (cont > 0) {
   	 cin >> valor;
   	 cont--;
   	 soma += valor;
    }
    
    cout << "Média: " << float(soma)/num << endl;
    return 0;
}
