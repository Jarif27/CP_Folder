#include <iostream>
#include <vector>
#include <set>

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
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i]; 
        }

        set<int> seen;
        int prefix_length = n;

        
        for (int i = n - 1; i >= 0; --i) 
        {
            if (seen.count(a[i])) 
            {
                prefix_length = i + 1;
                break;
            }
            seen.insert(a[i]);
        }


        cout << prefix_length << endl;
    }

    return 0;
}
