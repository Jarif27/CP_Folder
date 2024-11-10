#include <iostream>
using namespace std;

int main() 
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
   
    double tScore = X + 0.5 * Y;
    double oScore = Z + 0.5 * Y;

    
    int remainGames = 4 - (X + Y + Z);
    
    double maxTeamScore = tScore + remainGames;

   
    if (maxTeamScore > oScore) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
