#include <iostream>
#include <cmath>
using namespace std;

int main () {

    float quantHomens;
    cin >> quantHomens;
    const float caravela = 80;
    float quantCaravela = (quantHomens - 1000) / caravela;
    cout << ceil(quantCaravela) << endl;
return 0;
}
