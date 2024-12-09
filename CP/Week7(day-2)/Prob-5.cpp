#include <iostream>
using namespace std;

int main() 
{
    int T; 
    cin >> T;
    while (T--) 
    {
        int H, X, Y; 
        cin >> H>> X>>Y;

        int normal = (H + X - 1) / X;
        int health = H - Y;
        int special = 1 + (health > 0 ? (health + X - 1) / X : 0);

        
        cout << min(normal, special) << endl;
    }
    return 0;
}
