#include <iostream>
using namespace std;

int main () {
    char letra;
    cin >> letra;
    float altura;
    cin >> altura;
    
    if (letra == 'M') {
        float pesoIdealHomem = (72.7 * altura) - 58;
        cout << pesoIdealHomem << endl;
    } else {
        float pesoIdealMulher = (62.1 * altura) - 44.7;
        cout << pesoIdealMulher << endl;
    }
    return 0;
}
