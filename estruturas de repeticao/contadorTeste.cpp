#include <iostream>
using namespace std;

int main() {
    int num;
    int cont = 0;
    float valor; 
    float soma = 0;
    cin >> num;
    
    while (cont < num) {
   	 cin >> valor;
   	 cont++;
   	 soma += valor;
    }
    
    cout << "Média: " << float(soma)/num << endl;
    return 0;
}

