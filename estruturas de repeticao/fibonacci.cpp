#include <iostream>
using namespace std;

int main(){
    int num;
    int fib0 = 0;
    int fib1 = 1;
    int proximo = 0;
    
    cout << "Digite um numero positivo: " << endl;
    cin >> num;  // Sequencia irá parar até o numero digitado
    
    // Os primeiros termos sempre são 0 e 1
    cout << "Sequencia Fibonacci: " << fib0 << ", " << fib1 << ", ";
    proximo = fib0 + fib1;
    
    while (proximo <= num){
        cout << proximo << ", ";
        fib0 = fib1;
        fib1 = proximo;
        proximo = fib0+fib1;
    }
    
    return 0;
}
