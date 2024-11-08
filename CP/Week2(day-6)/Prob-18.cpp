#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
#include <deque>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        string b;
        cin >> n >> b;
        
        
        set<char> uniqueChars(b.begin(), b.end());
        string r(uniqueChars.begin(), uniqueChars.end());
        
       
        unordered_map<char, char> mapping;
        int len = r.size();
        
        for (int i = 0; i < len; ++i) 
        {
            mapping[r[i]] = r[len-1-i];
        }
        
        
        string original;
        for (char c : b) 
        {
            original += mapping[c];
        }
        
        
        cout << original << endl;
    }
    
    return 0;
}
