#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;

string atbash(string txt){
	char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
        'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int tamanho = txt.length();
	char linha[tamanho];
	for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < 26; j++){
            if(txt[i] == ' '){
                    linha[i] = (char)(32);
            }
             else if(txt[i] == alpha[j]){
                linha[i] = alpha[25-j];
             }
        }
	}
	string final = "";
	for(int i = 0; i < tamanho; i++){
		final += linha[i];
	}
	return final;

}


int main(){
    string nome;
    cin >> nome;
    
    ifstream entrada(nome);
    ofstream saida("cifrado.txt");
  
    string linha;
    
    while (getline(entrada, linha)){
        saida << atbash(linha) << endl;
    }
    
    entrada.close();
    saida.close();  
    return 0;
}
