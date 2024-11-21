#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];

        int totalSum = 0;
        for (int x : a) totalSum += x;

        
        if (totalSum < s) 
        {
            cout << -1 << "\n";
            continue;
        }

    
        if (totalSum == s) 
        {
            cout << 0 << "\n";
            continue;
        }

        
        int currentSum=0, left=0, maxLength=0;
        for (int right=0; right<n; right++) 
        {
            currentSum += a[right];
            while (currentSum>s) 
            {
                currentSum -=a[left];
                left++;
            }
            if (currentSum == s) 
            {
                maxLength = max(maxLength, right-left+1);
            }
        }

        
        int result = n-maxLength;
        cout << result << "\n";
    }
    return 0;
}
