#include <iostream>
using namespace std;

int main() {
    int codIdent, cont = 1, cont2 = 1;
    cin >> codIdent;
    
    while (cont < codIdent){
        int array[cont2];
        
        for (int cont3 = 0; cont3 < cont2; cont3++){
            array[cont3] = cont;
            cont++;
        }
        
        if (cont >= codIdent){
            for (int cont4 = 0; cont4 < cont2; cont4++){
                if (cont4 == cont2 - 1){
                    cout << array[cont4];
                } else {
                    cout << array[cont4] << "--";
                }
            }
        }
        cont2++;
    }
    return 0;
}
