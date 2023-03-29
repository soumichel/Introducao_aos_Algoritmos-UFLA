#include <iostream>
#include <string> 
using namespace std;

string procurador(int **mat, int numero, int x);

int main() {
    int **mat;
    int x;
    int y;
    int numero;
   
    cin >> x;
    cin >> y;
   
    mat = new int*[x];
    int i = 0;
   
    while (i < x){
        mat[i] = new int[y];
        i++;
    }
   
    int j = 0;
   
    while (j < x){
        for (int k = 0; k < y; k++) {
		cin >> mat[j][k];
    }
    j++;
    }
    
    cin >> numero;
    string posi = procurador(mat, x, numero);
    cout << posi << endl;
    return 0;
}


string procurador(int **matriz, int x, int numero) {
    string resp = "ausente";
    int i = 0;
    bool verifica = false;
    
    while (i < x){
        for (int j = 0; j < x; j++) {
		if(matriz[i][j] == numero and !verifica) {
			resp = to_string(i) + " " + to_string(j);
			verifica = true;
        }
      }
      i++;
    }
   return resp;
}
