#include <iostream>
using namespace std;

int main() 
{
    int X, Y;
    cin >> X >> Y;

    int margin = X - Y; 

    if (margin >= 18) 
    {
        cout << "RCB" << endl; 
    } 
    else 
    {
        cout << "CSK" << endl; 
    }

    return 0;
}
