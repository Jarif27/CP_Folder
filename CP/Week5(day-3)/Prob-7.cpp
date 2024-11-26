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

        if (n == 2) 
        {
            cout << "NO" << endl;
        } 
        else 
        {
            cout << "YES" << endl;
            string result;
            
            for (int i = 0; i < n; i++) 
            {
                result += (i%2==0) ? 'A' : 'B';
            }
            if (n%2==1) 
            {
                result += "A"; 
            }
            cout << result << endl;
        }
    }
    return 0;
}
