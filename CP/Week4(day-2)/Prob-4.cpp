#include <iostream>
using namespace std;

int main() 
{
    int q;
    cin >> q; 
    while (q--) 
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

       
        long long x = min(a, S / n);
        long long remaining = S - x * n; 

        
        if (remaining <= b) 
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
