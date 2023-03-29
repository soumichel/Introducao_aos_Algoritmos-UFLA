#include <iostream>
using namespace std;

bool verificaPrimo(int n) {
    for (int i = n - 1; i > 1; i--){
        if((n % i) == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[9];
    
    for (int i = 0; i < 9; i++){
        cin >> vetor[i];
    }
    
    for (int i = 0; i < 9; i++){
        if (verificaPrimo(vetor[i])){
            cout << vetor[i] << " " << i << endl;
        }
    }
    return 0;
}
