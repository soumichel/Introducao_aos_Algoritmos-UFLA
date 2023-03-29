#include <iostream>
using namespace std;

int macho(int x);

int femea(int x) {
    if (x == 0){
        return 1;
    } else {
        int form;
        form = x - macho(femea(x-1));
        return form;
    }
}

int macho(int x) {
    if (x == 0){
        return 0;
    } else {
        int form;
        form = x - femea(macho (x-1));
        return form;
    }
}

int main() {
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    cout << femea(n1) << " " << femea(n2) << " " << femea(n3) << " " << macho(n4) << " " << macho(n5) << " " << macho(n6);
    return 0;
}
