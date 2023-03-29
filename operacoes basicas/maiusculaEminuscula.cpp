#include <iostream>
using namespace std;

int main () {
    char letra;
    cin >> letra;
    
    if (letra > 64 and letra < 91) {
        cout << "MAIUSCULA" << endl;
    } else {
        cout << "MINUSCULA" << endl;
    }
    return 0;
}
