#include <iostream>
#include <fstream>
using namespace std;

struct pokemao {
    int distancia;
    string nome;
    string tipo;
};

void ordenaPokemao(pokemao pokemons[], int x);

int main() {
    ifstream entrada("dados.txt");
    ofstream saida("pokemon.txt");
    
    string tipoPokemon;
    int quantPoke;
    
    cin >> tipoPokemon >> quantPoke;
    
    if(entrada) {
        int tamanho;
        int cont = 0; 
        int cont2 = 0;
        
        entrada >> tamanho;
        pokemao pokemons[tamanho];

        for (int i = 0; i < tamanho; i++){
            entrada >> pokemons[i].nome >> pokemons[i].tipo 
            >> pokemons[i].distancia;

            if (pokemons[i].tipo == tipoPokemon){
                cont++;
            }
        }
        
        ordenaPokemao(pokemons, tamanho);
        
        pokemao tipoDoPokemon[cont];
        for(int i = 0;i < tamanho; i++) {
            cout << pokemons[i].tipo << " " 
            << tipoDoPokemon << endl;
            
            if (pokemons[i].tipo == tipoPokemon and cont2 < quantPoke){
                tipoDoPokemon[cont2] = pokemons[i];
                cont2++;
            }
        }
        
        for(int i = 0; i < cont; i++){
            saida << tipoDoPokemon[i].nome << endl;
        }
        
    }
    
    entrada.close();
    saida.close();
    
    return 0;
}

void ordenaPokemao(pokemao pokemons[], int x) {
    pokemao aux;
    for (int i = 1; i < x; i++){
        int k = i;
        while (k > 0 and pokemons[k - 1].distancia > pokemons[k].distancia){
            aux = pokemons[k];
            pokemons[k] = pokemons[k - 1];
            pokemons[k - 1] = aux;
            k--;
        }
    }
}
