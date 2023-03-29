#include <iostream>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    int n1MDC = n1;
    int n2MDC = n2;
    int mdc;
    int mmc;
    int resto;
    
    do {
        resto = (n1MDC % n2MDC);
        n1MDC = n2MDC;
        n2MDC = resto;
    } while (resto != 0);
    mdc = n1MDC;
    
    if ((n1 == 0) or (n2 == 0)){
        mmc = 1;
    } else {
        mmc = (n1 * n2) / mdc;
    }
    
    cout << mmc << endl;
    return 0; 
}

