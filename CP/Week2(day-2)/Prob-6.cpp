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
        string row1,row2;
        cin >> row1 >> row2;

        bool same = true;

        for (int i = 0; i < n; i++) 
        {
            char color1 = (row1[i] == 'G' || row1[i] == 'B') ? 'X' : row1[i];
            char color2 = (row2[i] == 'G' || row2[i] == 'B') ? 'X' : row2[i];
            if (color1 != color2) 
            {
                same = false;
                break;
            }
        }

        if (same) 
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
