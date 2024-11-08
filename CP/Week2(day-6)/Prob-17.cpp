#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    
    
    unordered_map<int, int> freq;
    for (int size : a) 
    {
        freq[size]++;
    }
    
    // Find the maximum frequency
    int max = 0;
    for (const auto& entry : freq) 
    {
        if (entry.second > max) 
        {
            max= entry.second;
        }
    }
    
  
    cout << max << endl;
    
    return 0;
}
