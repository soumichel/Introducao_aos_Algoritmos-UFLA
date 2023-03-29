#include <iostream>
using namespace std;

int cap(int x) {
    int restoDiv = 0;
    int inv = 0;
    
    while (x != 0){
        restoDiv = x % 10;
        inv = inv * 10 + restoDiv; //realizando a inversão
        x /= 10;
    }
    return inv;
}

int main() {
    int nCap;
    cin >> nCap;
    if (cap(nCap) == nCap){
        cout << "sim" << endl;
    } else{
        cout << "nao" << endl;
    }
    return 0;
}
