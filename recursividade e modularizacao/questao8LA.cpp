#include <iostream>
using namespace std;

int C(int n, int k) {
    if (k == 0){
        return 1;
    }
    if (k == n){
        return 1;
    } else {
         return C(n-1, k-1) + C(n-1, k);
    }
}

int main() {
    int N;
    int K;
    cin >> N >> K;
    cout << C(N, K) << endl;
    return 0;
}
