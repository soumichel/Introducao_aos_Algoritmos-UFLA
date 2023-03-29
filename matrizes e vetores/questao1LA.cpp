#include <iostream>
using namespace std;

int buscaBinaria (int v[], int posiI, int posiF, int b){
    int x;
    bool NA = false;
    int cont = 0;
    
    while (posiI <= posiF){
        x = (posiI + posiF) / 2;
        cont++;
        if (b == v[x]){
            NA = true;
            cout << x << endl;
            return cont;
        } 
        if (b > v[x]){
                posiI = x + 1;
        } else {
                posiF = x;
        }
    }
    if (!NA){
        cout << "-1" << endl;
    }
    return cont;
}

int main() {
    int tamanho;
    int cont;
    int buscaV;
    int posicao, posiInicial = 0;
    cin >> tamanho;
    int posiFinal = tamanho - 1;
    int v[tamanho];
    
    for (posicao = 0; posicao < tamanho; posicao++){
        cin >> v[posicao];
    }
    
    cin >> buscaV;
    
    cont = buscaBinaria(v, posiInicial, posiFinal, buscaV);
    cout << cont << endl;
    return 0;
}
