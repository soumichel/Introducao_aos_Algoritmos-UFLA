#include <iostream>
#include <string>
using namespace std;

string mes(int x) {
    
    if (x == 1){
        return "janeiro";
    } else if (x == 2){
        return "fevereiro";
    } else if (x == 3){
        return "marco";
    } else if (x == 4){
        return "abril";
    } else if (x == 5){
        return "maio"; 
    } else if (x == 6){
        return "junho";
    } else if (x == 7){
        return "julho";
    } else if (x == 8){
        return "agosto";
    } else if (x == 9){
        return "setembro";
    } else if (x == 10){
        return "outubro";
    } else if (x == 11){
        return "novembro";
    } else if (x == 12){
        return "dezembro";
    }
    return "erro";
}

int main() {
    int nmMes;
    cin >> nmMes;
    cout << mes(nmMes) << endl;
    return 0;
}
