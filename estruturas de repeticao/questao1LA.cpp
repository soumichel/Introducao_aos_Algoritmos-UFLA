#include <iostream>
using namespace std;

int main(){
    double energThanos;
    cin >> energThanos;
    double energThor;
    cin >> energThor;
    int socos = 0;
    
    while (energThor > energThanos){
        energThor = energThor - (energThor * 0.06);
        energThanos = energThanos - (energThanos * 0.02);
        socos++;
    }
    
    cout << socos << endl;
    return 0;
}
