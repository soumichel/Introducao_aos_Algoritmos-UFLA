#include <iostream>
using namespace std;

int main () {
    float valor;
    cin >> valor;
    char moedaConversao;
    cin >> moedaConversao;
    
    switch (moedaConversao) {
        case 'D':
        cout << valor / 3.26 << endl;
        break;
        
        case 'E':
        cout << valor / 3.88 << endl;
        break;
        
        case 'P':
        cout << valor / 0.19 << endl;
        break;
    }
    return 0;
}
