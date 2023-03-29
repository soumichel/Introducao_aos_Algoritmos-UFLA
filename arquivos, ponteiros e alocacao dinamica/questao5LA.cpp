#include <iostream>
#include <fstream>
using namespace std;

int removeDuplicados(int array[], int x);

int main() {
    
    ifstream entrada("entrada.txt");

    if (entrada){
        int tamanho;
        entrada >> tamanho;
        int v[tamanho];

        for(int i = 0; i < tamanho; i++) {
            entrada >> v[i];
        }
        
        int tamanhoFinal = removeDuplicados(v, tamanho);
        
        ofstream saida("saida.txt");
        
        int i = 0;
        
        while (i < tamanhoFinal){
            saida << v[i] << " ";
            i++;
        }
        saida.close();
    }
    entrada.close();

    return 0;
}

int removeDuplicados(int array[], int x) {

    for (int i = 0; i < x; i++){
        for(int j = 0; j < i; j++){

            if(array[i] == array[j]){
                x--;
                for (int k = i; k < x; k++){
                    array[k]=array[k + 1];
                }
                i--;
            }
        }
    }
    return x;
}
