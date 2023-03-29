#include <iostream>
#include <string>
using namespace std;

void penalidade(float soma) {
    if (soma < 55){
        float tempoMin;
        tempoMin = 0.1 * (55 - (soma));
        cout << tempoMin << endl;
    } else if (soma > 65){
        float tempoMax = 0.1 * ((soma) - 65);
        cout << tempoMax << endl;
    } else {
        cout << 0.0 << endl;
    }
}

void tempo(int hI, int mI, int hF, int mF) {
    if (hF == 0){
        hF = 24;
    }
    int subH = (hF - hI) * 60;
    int subM = (mF - mI);
    int soma = subH + subM;
    penalidade(soma);
}

int main() {
    string nomeEscola;
    int horaI;
    int horaF;
    int minI;
    int minF;
    bool samba = false;
    
    do {
        if (samba == true){
            cin.ignore();
        }
        getline (cin, nomeEscola);
        if (nomeEscola != "fim"){
            cin >> horaI >> minI >> horaF >> minF;
            tempo(horaI, minI, horaF, minF);
        }
        samba = true;
    } while (nomeEscola != "fim");
    
    return 0;
}
