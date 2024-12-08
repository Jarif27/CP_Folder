#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> h[i];

        int maxLength = 0, left = 0, Sum = 0;
        
        for (int right = 0; right < n; right++) 
        {
        
            Sum += a[right];

            while (left < right && h[right-1] % h[right] != 0) 
            {
                Sum -= a[left];
                left++;
            }
            
            while (Sum > k) 
            {
                Sum -= a[left];
                left++;
            }
            
            maxLength = max(maxLength, right - left + 1);
        }

        cout << maxLength << "\n";
    }
    return 0;
}
