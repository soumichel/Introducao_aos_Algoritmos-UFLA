#include <iostream>
using namespace std;

/* Elabore um programa que preencha uma matriz 10 x 10 com números inteiros,
 *  execute cada operação de troca especificada a seguir na matriz original e mostre cada matriz resultante.
 *  Você vai precisar de ao menos uma matriz extra para realizar as operações.
 *  Operações de troca a serem realizadas (considerando índices que começam em 1):
 * a linha 2 com a linha 8;
 * a coluna 4 com a coluna 10;
 * a diagonal principal com a diagonal secundária;
 * a linha 5 com a coluna 10. */

void matriz(int m[][10]) {    //exibindo a matriz a cada loop
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int original[10][10], auxiliar[10][10];
    int l2 = 1, l8 = 7;
    
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cin >> original[i][j];
        }
    }
    
    cout << "1." << endl;
    for (int i=0; i<10; i++){     //linha 2 com a 8
        for (int j=0; j<10; j++){
            if (i == l2){
                auxiliar[i][j] = original[l8][j];
            } else if (i == l8){
                auxiliar[i][j] = original[l2][j];
            } else {
                auxiliar[i][j] = original[i][j];
            }
        }
    }
    matriz(auxiliar);
    
    cout << "2." << endl;
    int c4 = 3, c10 = 9;
    
    for (int i=0; i<10; i++){     //coluna 4 com a 10
        for (int j=0; j<10; j++){
            if (j == c4){
                auxiliar[i][j] = original[i][c10];
            } else if (j == c10){
                auxiliar[i][j] = original[i][c4];
            } else {
                auxiliar[i][j] = original[i][j];
            }
        }
    }
    matriz(auxiliar);
    
    cout << "3." << endl;
    
    for (int i=0; i<10; i++){     //diagonal principal com secundária
        for (int j=0; j<10; j++){
            if (i == j){
                auxiliar[i][j] = original[i][(10-1) - j];
            } else if (i + j == 10 - 1){
                auxiliar[i][j] = original[i][i];
            } else {
                auxiliar[i][j] = original[i][j];
            }
        }
    }
    matriz (auxiliar);
    
    cout << "4." << endl;
    /*int l5 = 4;
    
    for (int i=0; i<10; i++){     //linha 5 com a coluna 10
        for (int j=0; j<10; j++){
            if (i == l5){
                auxiliar[i][j] = original[c10][j];
            } else if (j == c10){
                auxiliar[i][j] = original[l5][j];
            } else {
                auxiliar[i][j] = original[i][j];
            }
        }
    }
    matriz(auxiliar);*/
    return 0;
}
