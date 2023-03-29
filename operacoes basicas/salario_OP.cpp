#include <iostream>
using namespace std;

int main (){
    
    float salarioMinimo;
    cin >> salarioMinimo;
    int horasTrabalhadas;
    cin >> horasTrabalhadas;
    float valorHorasT = salarioMinimo * 0.05;
    float salarioBruto = valorHorasT * horasTrabalhadas;
    float imposto = salarioBruto * 0.23;
    float salarioFinal = salarioBruto - imposto;

    cout << salarioFinal << endl;

return 0;
}
