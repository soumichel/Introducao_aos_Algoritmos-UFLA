#include <iostream>
using namespace std;

int main (){
    int num = 1;
    int soma = 0;
    int cont = 0;
    float media; //aritmetica
    int quantP = 0;
    int quantN = 0;
    
    do {
        cin >> num;
        if (num != 0){
            cont++;
        }
        if (num < 0){
            quantN++;
        } else if(num > 0){
            quantP++;
        }
        soma += num;
        media = ((soma*100.0)/100.0) / cont;
    } while (num != 0);

        cout << media << endl;
        cout << quantP << endl;
        cout << quantN << endl;
        cout << ((quantP*100.0)/cont)/100.0 << endl;
        cout << ((quantN*100.0)/cont)/100.0 << endl;
        return 0;
}
