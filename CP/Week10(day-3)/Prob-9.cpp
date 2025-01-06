#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        long long X, Y;
        cin >> X >> Y;

        long long K = Y / (X + 1);

        cout << K << endl;
    }

    return 0;
}
