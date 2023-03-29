#include <iostream>
using namespace std;

void vetor(int v[], int qntd) {
    cout << "[";
    int cont = 0;
    
    while (cont < qntd){
            if(cont == qntd-1){
            cout << v[cont];
        }else {
            cout << v[cont] << ", ";
        }
        cont++;
    }
    cout << "]";
}

int main() {
    int qntd;
    int cont = 0;
    cin >> qntd;
    int v[qntd];
    
    while (cont < qntd){
        int num = 0;
        cin >> num;
        v[cont] = num;
        cont++;
    }
    vetor(v, qntd);
    return 0;
}
