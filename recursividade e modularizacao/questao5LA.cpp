#include <iostream>
using namespace std;

int nDig(int x) {
    int div = x / 10;
    if (div != 0){
        return 1 + nDig(div);
    } else {
        return 1;
    }
}

int main() {
    int num;
    cin >> num;
    cout << nDig(num) << endl;
    return 0;
}
