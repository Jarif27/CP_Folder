#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        unordered_set<int> seen;
        int moves = 0;
        
        
        for (int i = 0; i < n; i++) 
        {
            if (seen.count(a[i])) 
            {
                
                break;
            }
            seen.insert(a[i]);
            moves++;
        }

        cout << n-moves << endl;
    }

    return 0;
}
