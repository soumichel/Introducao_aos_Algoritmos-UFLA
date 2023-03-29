#include <iostream>
using namespace std;

int F(int n) {
    if (n <= 1){
        return 1;
    } else {
        return F(n-1)+F(n-2);
    }
}

int main() {
    int n = 0;
    int etapas;
    cin >> etapas;
    
    do {
        cout << F(n) << " ";
        n++;
    } while(n < etapas);
    return 0;
}
