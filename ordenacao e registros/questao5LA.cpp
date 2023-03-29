#include <iostream>
using namespace std;

void ordena(int tamanho, int v[]) {
    int aux, posMenor;
    for (int i = 0; i <= tamanho; ++i) {
        posMenor = i;
        for (int j = i+1; j <= tamanho; ++j) {
            if (v[j] > v[posMenor])
                posMenor = j;
        }
        aux = v[i];
        v[i] = v[posMenor];
        v[posMenor] = aux;
    }
}

int main() {
    int tamanho;
    int i = 0;
    cin >> tamanho;
    int v[tamanho];
    
    while (i < tamanho){
        cin >> v[i];
        i++;
    }
    
    int posMenor;
    cin >> posMenor;
    ordena(posMenor, v);
    
    for(int i = 0; i < tamanho; i++){
        cout << v[i] << " ";
    }
    return 0;
}
