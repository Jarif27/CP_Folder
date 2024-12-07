#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isRotatedVersion(const vector<int>& a, const vector<int>& b) 
{
    int n = a.size();
    for (int i = 0; i < n; ++i) 
    {
        bool match = true;
        for (int j = 0; j < n; ++j) 
        {
            if (a[(i + j) % n] != b[j]) 
            {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
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
        
        vector<int> b = a;
        sort(b.begin(), b.end());
        
        if (isRotatedVersion(a, b)) 
        {
            cout << "Yes\n";
        } 
        else 
        {
            cout << "No\n";
        }
    }
    return 0;
}
