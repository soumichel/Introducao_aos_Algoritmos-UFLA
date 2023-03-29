#include <iostream>
using namespace std;

int main (){
    int num;
    cin >> num;
    int linha = 1;
    char arroba = 64;
    char hashtag = 35;
    
    do {
        int quantC = 1;
        do {
            if (quantC%2 != 0){
                cout << arroba;
            }
            if (quantC%2 == 0){
                cout << hashtag;
            }
            quantC++;
        } while (quantC <= linha);
        cout << endl;
        linha++;
    } while (linha <= num);
    
    return 0;
}
