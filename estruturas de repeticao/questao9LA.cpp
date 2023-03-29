#include <iostream>
#include <string>
using namespace std;

int main (){
    int num;
    cin >> num;
    int n = 0;
    string soma = "";
    int valor = 0;
    
    while (n <= num){
        n++;
        if (num%n == 0){
            valor += n;
            if (n != num){
                soma += to_string(n) + "+";
            } else {
                soma += to_string(n) + "=";
            }   
        }
    }
    cout << soma + to_string(valor) << endl;
    return 0;
}
