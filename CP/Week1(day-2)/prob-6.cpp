#include <iostream>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, T;
    cin >> A >> B >> T;

    
    int produce_time = T / A;

    
    int total_biscuits = produce_time * B;
    cout << total_biscuits << endl;

    return 0;
}

