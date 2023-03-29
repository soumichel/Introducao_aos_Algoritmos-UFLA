#include <iostream>
using namespace std;

int main (){
    int divid;
    int quociente;
    int div;
    cin >> div;
    
    do{
        cin >> divid;
    } while (divid % div != 2);
    
    quociente = divid / div;
    
    cout << quociente << endl;
    
    return 0;
}
