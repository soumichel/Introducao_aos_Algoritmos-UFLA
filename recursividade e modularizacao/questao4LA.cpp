#include <iostream>
using namespace std;

int reverso(int x) {
    int inv = 0;
    int restoDiv = 0;
    
    while (x != 0){
        restoDiv = x % 10;
        inv = inv * 10 + restoDiv; //operação semelhante a questão 1
        x /= 10;
    }
    return inv;
}

int main() {
    int num;
    cin >> num;
    cout << reverso(num) << endl;
    return 0;
}
