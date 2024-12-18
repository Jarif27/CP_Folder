#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T; 
    cin >> T;
    while (T--) 
    {
        int N; 
        cin >> N;
        string S; 
        cin >> S;

        int moves = 0;
        
        for (int i = 0; i < N - 1; ++i) 
        {
            if (S[i] != S[i + 1]) 
            {
                moves++;
            }
        }

        
        if (moves % 2 == 1) 
        {
            cout << "Zlatan" << endl;
        } 
        else 
        {
            cout << "Ramos" << endl;
        }
    }
    return 0;
}
