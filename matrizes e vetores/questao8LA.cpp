#include <iostream>
using namespace std;

int main() {
    int coluna;
    int linha;
    cin >> linha >> coluna;
    int matriz[linha][coluna];
    
    for (int cont = 0; cont < linha; cont++){
        for (int cont2 = 0; cont2 < coluna; cont2++){
            cin >> matriz[cont][cont2];
        }
    }
    
    for (int cont = 0; cont < linha; cont++){
        if ((cont + 1) % 2 != 0){
            for (int cont2 = coluna - 1; cont2 >= 0; cont2--){
            cout << matriz[cont][cont2] << " ";
        }
        } else {
            for (int cont2 = 0; cont2 < coluna; cont2++){
            cout << matriz[cont][cont2] << " ";
        }
        }
    }
    return 0;
}
