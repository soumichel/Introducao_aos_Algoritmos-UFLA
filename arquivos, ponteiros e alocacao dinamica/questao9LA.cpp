#include <iostream>
using namespace std;

int fat(int x);
float *obterVetor(int numero);

int main() {
    int n;
    cin >> n;

    float *vetor = obterVetor(n);
    
    int m;
    cin >> m;
    int i = m;
    
    while (i < n){
        cout << vetor[i] << endl;
        i++;
    }
    return 0;
}


int fat(int x) {
    while (x > 1){
        return fat(x - 1) * x;
    }
    return 1;
}


float *obterVetor(int numero) {
	float *vetor = new float[numero];
    for (int i = 0; i < numero; i++){
        vetor[i] = (i * i + 1.75) / (2 * fat(i) + i);
    }
	return vetor;
}
