#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        
        long long S = a + b + c; 
        if (n <= S) 
        {
           
            if (n <= a) cout << 1 << endl;
            else if (n <= a + b) cout << 2 << endl;
            else cout << 3 << endl;
            continue;
        }

        
        long long full_cycles = n / S;
        long long distance_covered = full_cycles * S;
        long long remaining = n - distance_covered;

        
        if (remaining <= 0) 
        {
            cout << full_cycles * 3 << endl;
        } 
        else if (remaining <= a) 
        {
            cout << full_cycles * 3 + 1 << endl;
        } 
        else if (remaining <= a + b) 
        {
            cout << full_cycles * 3 + 2 << endl;
        } 
        else 
        {
            cout << full_cycles * 3 + 3 << endl;
        }
    }
    return 0;
}
