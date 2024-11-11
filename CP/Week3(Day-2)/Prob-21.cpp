#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, k, q;
        cin >> n >> k >> q;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        
        long long result = 0;
        int start = 0; 
        
        
        for (int end = 0; end < n; ++end) 
        {
            if (a[end] > q) 
            {
                start = end + 1;
            } 
            else 
            {
                
                if (end - start + 1 >= k) 
                {
                    result += (end - start + 1 - k + 1); 
                }
            }
        }
        
        cout << result << "\n";
    }
    
    return 0;
}
