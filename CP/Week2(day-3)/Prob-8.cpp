#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);  
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    
    vector<int> distinct_count(n);  
    unordered_set<int> seen; 
    
    
    for (int i = n - 1; i >= 0; --i) 
    {
       seen.insert(a[i]);
        
        distinct_count[i] = seen.size();
    }
    
    
    while (m--) 
    {
        int li;
        cin >> li;
        cout << distinct_count[li - 1] << endl;
    }
    
    return 0;
}
