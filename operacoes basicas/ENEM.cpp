#include <iostream>
using namespace std;

int main () {
    float mat;
    cin >> mat;
    float nat;
    cin >> nat;
    float ling;
    cin >> ling;
    float redacao;
    cin >> redacao;
    float hum;
    cin >> hum;
    float media;
    
    if (redacao >= 200) {
        media = (3*mat + 2*nat + 2*ling + 2*redacao + hum) / 10;
        cout << media << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}
