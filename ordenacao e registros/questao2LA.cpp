#include <iostream>
using namespace std;

struct professor {
	string nome;
    string alimento1;
    string alimento2;
    int qntd1;
    int qntd2;
};
  
struct alimento{
	string nome;
	int quantidade;
};
  
void Alimento(alimento vAlim[], int& tamanhoVA, string alimento, int quantAlim) {
	  int i = 0;
	  
	  while ((i < tamanhoVA) and (vAlim[i].nome != alimento)){
		  i++;
	  }
	  
	  if (i < tamanhoVA){
		 vAlim[i].quantidade = vAlim[i].quantidade + quantAlim;
	 } else {
		 vAlim[i].nome = alimento;
		 vAlim[i].quantidade = quantAlim;
		 tamanhoVA++;
     }
}

int main() {
    int k = 0, i = 0;
    int numero;
    cin >> numero;
    
    professor vProf[numero];
    
    while (i < numero){
        cin >> vProf[i].nome>>vProf[i].alimento1>>vProf[i].qntd1
        >>vProf[i].alimento2>>vProf[i].qntd2;
        i++;
    }
    
	alimento vAlimentos[2 * numero];
	int qtdadeAlimentos = 0;
	
	for (int j = 0; j < numero; j++){
		Alimento(vAlimentos, qtdadeAlimentos, vProf[j].alimento1, vProf[j].qntd1);
		Alimento(vAlimentos, qtdadeAlimentos, vProf[j].alimento2, vProf[j].qntd2);
	}
    
    while (k < qtdadeAlimentos){
        cout << vAlimentos[k].nome << " " << vAlimentos[k].quantidade << endl;
        k++;
    }
	return 0;
}
