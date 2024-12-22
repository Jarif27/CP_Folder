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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int max_diff = -1e9; 
        
        for (int mask = 0; mask < (1 << n); mask++) 
        {
            int m = 0, s = 0;
            for (int i = 0; i < n; i++) 
            {
                if (mask & (1 << i)) 
                { 
                    m += a[i];
                    if (i + 1 < n) 
                    {
                        s += b[i + 1]; 
                    }
                }
            }
            max_diff = max(max_diff, m - s);
        }

        cout << max_diff << endl;
    }
    return 0;
}
