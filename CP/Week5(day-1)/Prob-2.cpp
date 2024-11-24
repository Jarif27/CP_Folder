#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, m;
        cin >>n>>m;
        
        if (m<n) 
        {
            cout << "No" << endl;
        } 
        else 
        {
            cout << "Yes" << endl;
            
            int x=m/n;
            int remainder = m%n;
            
            vector<int> sequence(n, x);
            for (int i = 0; i < remainder; i++) 
            {
                sequence[i] = x + 1;
            }
            
            
            for (int i = 0; i < n; i++) 
            {
                cout << sequence[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
