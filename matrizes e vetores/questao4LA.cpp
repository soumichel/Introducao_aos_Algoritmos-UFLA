#include <iostream>
using namespace std;

int main() {
    int qntd[10], untr[10];
    int cont = 0, total = 0;
    
    do {
        cin >> qntd[cont];
        cin >> untr[cont];
        cont++;
    } while (cont < 10);
    
    cont = 0;
    int maior = qntd[0], maiorIndice = 0;
    
    do {
        int qntde = qntd[cont], unitario = untr[cont];
        cout << unitario << " " << qntde << " ";
        cout << unitario * qntde << endl;
        total = total + (unitario * qntde);
        
        if (qntde > maior){
            maior = qntde;
            maiorIndice = cont;
        }
        cont++;
    } while (cont < 10);
    
    cout << total << " ";
    cout << 900 + (0.05 * total) << endl;
    cout << untr[maiorIndice] << " " << maiorIndice << endl;
    return 0;
}
