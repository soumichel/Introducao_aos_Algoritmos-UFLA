#include <iostream>
using namespace std;

int vetorRecursivo(int v[], int x) {
    if (x == 1){
        return v[0];
    } else{
        return min(v[x-1], vetorRecursivo(v, x-1));
    }
}

int main() {
    int x;
    int cont;
    int cont2;
    int rtn;
    cin >> x;
    int v[x];
    
    for (cont = 0; cont < x; cont++){
        cin >> v[cont];
    }
    
    rtn = vetorRecursivo(v, x);
    cout << rtn << " ";
    
    for (cont2 = 0; cont2 < x; cont2++){
        if (v[cont2] == rtn){
            cout << cont2 << endl;
        }
    }
    
    return 0;
}
