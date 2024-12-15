#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) 
    {
        int n;
        cin >> n; 
        vector<int> a(n), b(n), freq(n + 1, 0); 
        
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) 
        {
            b[i] = a[i]; 
            freq[b[i]]++; 
        }

       
        for (int i = 0; i < n; i++) 
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
