#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, T;
    cin >> S >> T;

    int result = 0;
    
    for (int i = 0; i < S.length(); i++) 
    {
        if (S[i] != T[i]) 
        {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}
