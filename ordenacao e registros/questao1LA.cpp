#include <iostream>
using namespace std;

struct Stormtroopers {
    int batalhas;
    string planeta;
    string nome;
};

bool verificaPlaneta(string nomePlaneta[], int x, string planetaOR) {
    int i = 0;
    bool exst = false;
    
    while (i < x){
        if (nomePlaneta[i] == planetaOR){
            exst = true;
        }
        i++;
    }
    return exst;
}

int main() {
    int k = 0;
    int x;
    cin >> x;
    
    Stormtroopers Stormtroop[x];
    int qntdTrooperPlnt[x] = {0};
    float mediaBatalhas[x] = {0.0};
    string nomePlanetas[x] = {""};
    
    for (int i = 0; i < x; i++){
        cin >> Stormtroop[i].nome >> Stormtroop[i].planeta >> Stormtroop[i].batalhas;
        
        if (!verificaPlaneta(nomePlanetas, x, Stormtroop[i].planeta)){
            nomePlanetas[i] = Stormtroop[i].planeta;
            qntdTrooperPlnt[i] = 1;
            mediaBatalhas[i] = Stormtroop[i].batalhas;
        } else {
            for (int j = 0; j < x; j++){
                if (nomePlanetas[j] == Stormtroop[i].planeta){
                    qntdTrooperPlnt[j]++;
                    mediaBatalhas[j] = mediaBatalhas[j] + Stormtroop[i].batalhas;
                }
            }
        }
    }
    
    while (k < x){
        if (qntdTrooperPlnt[k] != 0){
            cout << nomePlanetas[k] << " " << qntdTrooperPlnt[k] << " " << mediaBatalhas[k] / qntdTrooperPlnt[k] << endl;
        }
        k++;
    }
    return 0;
}
