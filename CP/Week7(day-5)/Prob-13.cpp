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

        int size = n*(n-1)/2;
        vector<int> b(size);
        for (int i=0; i<size; ++i) 
        {
            cin >> b[i];
        }

    
        sort(b.begin(), b.end());

        
        vector<int> a;
        int c_index = size-1; 
        for (int i=1; i<n; ++i) 
        {
            a.push_back(b[c_index]);
            c_index -= i;
        }
        a.push_back(b[c_index]); 

        
        reverse(a.begin(), a.end()); 
        for (int i=0; i<n; ++i) 
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
