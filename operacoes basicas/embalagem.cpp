#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float serieProduto;
    cin >> serieProduto;
    float serieCaixa = serieProduto / 6;
    
    cout << ceil(serieCaixa) << endl;
}
