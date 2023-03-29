#include <iostream>
using namespace std;

int main (){
    int termo1;
    cin >> termo1;
    int termo2;
    cin >> termo2;
    int a = 0;
    int mult = termo2;
    
    if (termo1 == 0 or termo2 == 0){
        cout << 0 << endl;
    }
    
    while (mult != 0){
        a += termo1;
        mult--;
        cout << a << endl;
    }
    return 0;
}
