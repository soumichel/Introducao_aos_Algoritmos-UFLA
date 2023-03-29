#include <iostream>
#include <fstream>
using namespace std;

struct ladroes{
    string nome;
    string partido;
    float cifrao;
};

void mergeSort(ladroes *array, int  esq, int  dir);
void merge(ladroes *array, int  esq, int  meio, int  dir);

int main(){
	int tam;
	cin >> tam;
	ladroes quadrilha[tam];
	ofstream arq("relacao_corruptos.txt");
    
	for(int i = 0; i < tam; i++){
		ladroes ladrao;
		cin >> ladrao.nome >> ladrao.partido >> ladrao.cifrao;
		quadrilha[i] = ladrao;
	}
    
	mergeSort(quadrilha, 0, tam - 1);
    
	for(int i = 0; i < tam; i++){
		arq << quadrilha[i].nome << endl;
	}
	arq.close();
	return 0;
}

void merge(ladroes *array, int  esq, int  meio, int  dir)
{
    auto vetor1 = meio - esq + 1;
    auto vetor2 = dir - meio;
  
    auto *esqArray = new ladroes[vetor1],
         *dirArray = new ladroes[vetor2];
  
    for (auto i = 0; i < vetor1; i++)
        esqArray[i] = array[esq + i];
    for (auto j = 0; j < vetor2; j++)
        dirArray[j] = array[meio + 1 + j];
  
    auto indice1 = 0, 
        indice2 = 0; 
    int indiceTotal = esq; 
  
    while (indice1 < vetor1 and indice2 < vetor2) {
        if (esqArray[indice1].cifrao >= dirArray[indice2].cifrao) {
            array[indiceTotal] = esqArray[indice1];
            indice1++;
        }
        else {
            array[indiceTotal] = dirArray[indice2];
            indice2++;
        }
        indiceTotal++;
    }
    
    while (indice1 < vetor1) {
        array[indiceTotal] = esqArray[indice1];
        indice1++;
        indiceTotal++;
    }
    
    while (indice2 < vetor2) {
        array[indiceTotal] = dirArray[indice2];
        indice2++;
        indiceTotal++;
    }
}
  

void mergeSort(ladroes *array, int  esq, int  dir)
{
    if (esq >= dir)
        return; 
  
    auto meio = esq + (dir - esq) / 2;
    mergeSort(array, esq, meio);
    mergeSort(array, meio + 1, dir);
    merge(array, esq, meio, dir);
}
