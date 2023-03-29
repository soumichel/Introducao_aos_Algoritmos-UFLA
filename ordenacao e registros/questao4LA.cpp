#include <iostream>
using namespace std;

struct prdto {
    int ID;
    string descricao;
    double preco;
};

void insertionSort(prdto produtos[], int x) {
    prdto aux;
    
    for (int i = 1; i < x; i++) {
        int k = i;
        
        while (k > 0 and produtos[k - 1].preco > produtos[k].preco){
            aux = produtos[k];
            produtos[k] = produtos[k - 1];
            produtos[k - 1] = aux;
            k--;
        }
    }
}

int main() {
    int x;
    cin >> x;
    
    prdto products[x];
    
    for(int i = 0; i < x; i++){
        cin >> products[i].ID;
        cin.ignore(2, '\n');
        getline (cin, products[i].descricao);
        cin >> products[i].preco;
    }
    
    insertionSort(products, x);
    
    double low, high;
    cin >> low >> high;
    
    bool inxsnte = true;
    
    for (int j = 0; j < x; j++){
        if (products[j].preco >= low and products[j].preco <= high){
            cout << products[j].ID << " \"" << products[j].descricao << "\" " 
            << products[j].preco << endl;
            inxsnte = false;
        }
    }
    
    if (inxsnte){
        cout << "Inexistente" << endl;
    }
    return 0;
}
