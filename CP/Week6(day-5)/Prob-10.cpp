#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string n;
        cin >> n;

        int sum = 0;
        for (char c : n) 
        {
            int digit = c-'0';
            if (digit <=3) 
            {
                sum += digit * digit; 
            }
        }

      
        if (sum % 9 == 0) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
