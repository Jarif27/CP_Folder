#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 5) 
        {
            sort(s.begin(), s.end());   // check if the sorted string matches 
            
            
            if (s == "Timru")           // "Timur" sorted is "Timru"
            { 
                cout << "YES" << endl;
            } 
            
            else
            {
                cout << "NO" << endl;
            }
        } 
        
        else 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
