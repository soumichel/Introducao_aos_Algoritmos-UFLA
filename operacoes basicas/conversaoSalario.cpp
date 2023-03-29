#include <iostream>
using namespace std;

int main() {

float salarioReal;
const float valorDolar = 2.13;
const float valorEuro = 2.84;
const float valorLibra = 3.34;

cin >> salarioReal;
cout << salarioReal / valorDolar << endl;
cout << salarioReal / valorEuro << endl;
cout << salarioReal / valorLibra;

return 0;
}
 //Considerando o valor do salário mínimo de 1100
