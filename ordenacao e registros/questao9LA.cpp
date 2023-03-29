#include <iostream>
using namespace std;

int main() {
    int tamanho, aux, qntdSoma;
    int i = 0, k = 0;
    int soma = 0;
    cin >> tamanho;
    
    int v[tamanho];
    
    while (i < tamanho){
        cin >> v[i];
        i++;
    }
    
    cin >> qntdSoma;
    
    for (int j = 1; j < tamanho; j++){
        int x = j;
        
        while (x > 0 and v[x - 1] < v[x]){
            aux = v[x];
            v[x] = v[x - 1];
            v[x - 1] = aux;
            x--;
        }
    }
    
    while (k < qntdSoma){
        soma = soma + v[k];
        k++;
    }
    
    cout << soma << endl;
    return 0;
}
