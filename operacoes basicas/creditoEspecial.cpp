#include <iostream>
using namespace std;

int main () {
    float saldoMedio;
    cin >> saldoMedio;
    float credito;
    
    if (saldoMedio >= 0 and saldoMedio < 200) {
        credito = (0.1 * saldoMedio);
        cout << saldoMedio << endl;
        cout << credito << endl;
    } else if (saldoMedio >= 200 and saldoMedio < 400) {
        credito = (0.15 * saldoMedio);
        cout << saldoMedio << endl;
        cout << credito << endl;
    } else if (saldoMedio >= 400 and saldoMedio < 800) {
        credito = (0.2 * saldoMedio);
        cout << saldoMedio << endl;
        cout << credito << endl;
    } else if (saldoMedio >= 800 and saldoMedio < 1600) {
        credito = (0.25 * saldoMedio);
        cout << saldoMedio << endl;
        cout << credito << endl;
    } else if (saldoMedio >= 1600) {
        credito = (0.3 * saldoMedio);
        cout << saldoMedio << endl;
        cout << credito << endl;
    }
    return 0;
}
