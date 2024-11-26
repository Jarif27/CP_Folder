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
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total_sum = 0;

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            total_sum += a[i];
        }

        
        sort(a.begin(), a.end());

       
        long long max_rating = a[n-1] - (total_sum-a[n-1]);
        cout << max_rating << endl;
    }

    return 0;
}
