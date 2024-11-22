#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int q;
    cin >> q; 
    while (q--) 
    {
        int n;
        cin >> n; 
        string t;
        cin >> t; 

        string result = ""; 
        int i = n - 1; 

        while (i >= 0) 
        {
            if (t[i] == '0') 
            {

                int letterNumber = (t[i - 2] - '0') * 10 + (t[i - 1] - '0'); 
                result = char('a' + letterNumber - 1) + result; 
                i -= 3; 
            } 
            else 
            {
                
                int letterNumber = t[i] - '0'; 
                result = char('a' + letterNumber - 1) + result; 
                i--; 
            }
        }

        cout << result << endl;
    }
    return 0;
}
