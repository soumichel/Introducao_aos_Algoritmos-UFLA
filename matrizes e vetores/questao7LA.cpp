#include <iostream>
using namespace std;

int main() {
    float custoTransp[4][4], total = 0;
    int viagens;
    
    for (int cont = 0; cont < 4; cont++){
        for (int cont2 = 0; cont2 < 4; cont2++){
            cin >> custoTransp[cont][cont2];
        }
    }
    
    cin >> viagens;
    int itinerario[viagens];
    
    for (int cont3 = 0; cont3 < viagens; cont3++){
        cin >> itinerario[cont3];
    }
    
    for (int cont4 = 0; cont4 < viagens - 1; cont4++){
        total = total + custoTransp[itinerario[cont4]][itinerario[cont4 + 1]];
    }
    
    cout << total << endl;
    return 0;
}
