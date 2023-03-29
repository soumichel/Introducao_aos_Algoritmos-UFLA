#include <iostream>
using namespace std;

int main () {
    int energiatotalAPO;
    cin >> energiatotalAPO;
    int tempoLuta;
    cin >> tempoLuta;
    int socos;
    int energiaRestante;
    int energiaPerdida;
    
    socos = tempoLuta * 120;
    energiaPerdida = socos * 12;
    energiaRestante = energiatotalAPO - energiaPerdida;
    
    cout << socos << endl;
    cout << energiaRestante << endl;
    return 0;
}
 // 1 minuto = 120 socos 
 // cada soco -12 kj
