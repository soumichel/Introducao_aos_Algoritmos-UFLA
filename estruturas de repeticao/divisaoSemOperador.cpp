#include <iostream>
using namespace std;

int main() {
    int divid;
    int div;
    int quociente = 0;
    int cont = 0;
    cin >> divid;
    cin >> div;
    
    if (cont < 0){
        cont = -cont;
    } else if (cont > 0){
        cont = +cont;
    }
    
    while (divid >= div){
        divid -= div;
        ++quociente;
    }
    
    cout << quociente << endl;
    return 0;
}
