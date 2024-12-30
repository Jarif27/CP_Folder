#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        if (N % 3==0 || N%4 == 0 || (N>=7 && (N%3 == 1 || N%4 == 1 || N%3 == 2 || N%4 == 2))) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
