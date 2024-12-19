#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T; 

    while (T--) 
    {
        int X, Y;
        cin >> X >> Y; 

        
        int max_wins_A = X / 3;
        int max_wins_B = Y / 3;

        
        int leftover_A = X - 3 * max_wins_A;
        int leftover_B = Y - 3 * max_wins_B;

        
        int min_draws = (leftover_A + leftover_B) / 2;

        cout << min_draws << endl; 
    }

    return 0;
}
