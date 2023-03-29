#include <iostream>
using namespace std;

int main (){
    float x1;
    cin >> x1;
    float y1;
    cin >> y1;
    float x2;
    cin >> x2;
    float y2;
    cin >> y2;
    float m;
    float q;
    
    m = (y2 - y1) / (x2 - x1);
    q = (y1 - m * x1);
    
    cout << m << endl;
    cout << q << endl;
}
