#include <iostream>
using namespace std;

void insertionSort(int vetor[], int tam) {
    int valorPivo;
    int j;
    
    for (int i=1; i<tam; i++){
        valorPivo = vetor[i];
        j = i - 1;
        
        while ((j >= 0) and (valorPivo < vetor[j])){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j+1] = valorPivo;
    }
    
    for (int i=0; i<tam; i++){
        cout << vetor[i] << " ";   //exibindo os valores a cada iteração
    }
    cout << endl;
}

int main() {
    const int tamanho = 8;  //tamanho definido do vetor
    int v[tamanho];
    
    for (int i=0; i<tamanho; i++){
        cin >> v[i];   //inserindo os valores
        insertionSort(v, i+1);
    }
    return 0;
}
