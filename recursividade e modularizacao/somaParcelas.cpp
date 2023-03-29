#include <iostream>
using namespace std;

double formula(int N1) { //entrada em int
    double form;
    double soma = 0;
    int cont = 1; // valor 1 na form
    
    while (N1 >= cont){
        form = (double)cont * (double)(cont + 1) / (double)(cont + 3); // usar double na form
        soma += form;
        cont++;
    }
    return soma;
}

int main() {
    int n1;
    cin >> n1;
    cout <<  formula(n1) << endl;
    return 0;
}
