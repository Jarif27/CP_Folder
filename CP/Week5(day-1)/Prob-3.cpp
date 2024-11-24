#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        
        if (n == 1) 
        {
            cout << "YES" << endl;
            cout << "MM" << endl;
        }
        
        else if (n == 2) 
        {
            cout << "YES" << endl;
            cout << "MM" << endl;
        }
        
        else 
        {
            cout << "YES" << endl;
            string result;
            
            for (int i = 0; i < n; i++) 
            {
                result += (i % 2 == 0) ? 'A' : 'B';
            }
            cout << result << endl;
        }
    }

    return 0;
}
