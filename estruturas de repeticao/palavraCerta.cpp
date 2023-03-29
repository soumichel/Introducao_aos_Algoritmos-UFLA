#include <iostream>
using namespace std;

int main () {
    char letra;
    int cont = 0;
    int aux = 10;
    
    while (cont < 10){
        cin >> letra;
        cont++;
        if (letra == 'b'){
            aux--;
        }
    }
    
    if(aux < 5){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
