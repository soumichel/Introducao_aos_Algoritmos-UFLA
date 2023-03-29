#include <iostream>
using namespace std;

int main () {
    int numerador;
    cin >> numerador;
    int denominador;
    cin >> denominador;
    if (denominador != 0) {
        int divisao = numerador / denominador;
        int resto = numerador % denominador;
        cout << divisao << endl;
        cout << resto << endl;
    } else {
        cout << "erro" << endl;
    }
    return 0;
}
