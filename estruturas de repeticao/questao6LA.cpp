#include <iostream>
using namespace std;

int main (){
    int quantIngressos;
    cin >> quantIngressos;
    int numIngresso;
    int ingPremiado = 0;
    int cont = 1;
    int aux = 0;
    
    while (cont <= quantIngressos){
        cin >> numIngresso;
        if (numIngresso == cont and aux == 0){
            ingPremiado = numIngresso;
            aux++;
        }
        cont++;
    }
    
    cout << ingPremiado << endl;
    return 0;
}
