#include <iostream>
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
        
        vector<int> f_digits(n);
        
        for (int i=0; i<n; i++) 
        {
            cin >> f_digits[i];
        }
        
        vector<int> i_digits(n);
        
        for (int i=0; i<n; i++) 
        {
            int b;
            string moves;
            cin >> b >> moves;
            
            int current = f_digits[i];
            
            for (int j=0; j<b; j++) 
            {
                if (moves[j] == 'U') 
                {
                    current = (current - 1 + 10) % 10;  // Reverse up move by moving down
                } 
                
                else if (moves[j] == 'D') 
                {
                    current = (current + 1) % 10;       // Reverse down move by moving up
                }
            }
            i_digits[i] = current;
        }
        
        for (int i=0; i<n; i++) 
        {
            cout << i_digits[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
