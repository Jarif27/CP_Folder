#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int T;
    cin >> T; 

    while (T--) 
    {
        int N;
        string S;
        cin>> N>>S;

        int count0 = 0, count1 = 0;
        char prev = S[0];

        if (prev == '0') count0++;
        else count1++;

        for (int i = 1; i < N; i++) 
        {
            if (S[i] != prev) 
            {
                if (S[i] == '0') count0++;
                else count1++;
                prev = S[i];
            }
        }

        cout << min(count0, count1) << endl;
    }

    return 0;
}
