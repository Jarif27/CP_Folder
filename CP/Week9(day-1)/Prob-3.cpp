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
        string line;
        cin >> line;

        long long initial_value = 0;
        vector<long long> gains;

        
        for (int i = 0; i < n; ++i) 
        {
            if (line[i] == 'L') 
            {
                initial_value += i;
                if (n - 1 - i > i) 
                {
                    gains.push_back(n - 1 - i - i);
                }
            } 
            else 
            { 
                initial_value += (n - 1 - i);
                if (i > n - 1 - i) 
                {
                    gains.push_back(i - (n - 1 - i));
                }
            }
        }

        sort(gains.rbegin(), gains.rend());

        
        vector<long long> results(n, initial_value);
        
        long long accumulated_gain = 0;
        for (int k = 0; k < gains.size(); ++k) 
        {
            accumulated_gain += gains[k];
            results[k] = initial_value + accumulated_gain;
        }
        
        
        for (int k = 0; k < n; ++k) 
        {
            cout << results[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}
