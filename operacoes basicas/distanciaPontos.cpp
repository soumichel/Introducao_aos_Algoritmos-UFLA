#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float D;
    float x1;
    cin >> x1;
    float y1;
    cin >> y1;
    float x2;
    cin >> x2;
    float y2;
    cin >> y2;
    D = sqrt (pow ( (x2 - x1) ,2) + pow ( (y2 - y1) ,2));
    cout << D << endl;
return 0;
}
