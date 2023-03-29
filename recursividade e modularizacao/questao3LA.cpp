#include <iostream>
using namespace std;

int segundoMaior(int x) {
    int cont = x - 1;
    
    while (cont > 1){
        if (x % cont == 0){
            int divM = cont;
            return divM;
        }
        cont--;
    }
    return x;
}

int segundoMenor(int x) {
    int cont = 2;
    
    while (cont < x){
        if (x % cont == 0){
            int div = cont;
            return div;
        }
        cont++;
    }
    return 1;
}

void div(int x) {
    int d = 1;
    
    do {
        if (x % d == 0){
            cout << d << endl;
        }
        d++;
    } while (d <= x);
}

int main() {
    int num;
    cin >> num;
    div(num);
    
    cout << segundoMenor(num) << " " << segundoMaior(num);
    return 0;
}
