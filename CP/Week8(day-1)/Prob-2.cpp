#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) 
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        
        long long row1 = min(a, m);
        long long row2 = min(b, m);

        
        long long remRow1 = m-row1;
        long long remRow2 = m-row2;

        
        long long seated = min(c, remRow1 + remRow2);

        
        cout << (row1 + row2 + seated) << endl;
    }
    return 0;
}
