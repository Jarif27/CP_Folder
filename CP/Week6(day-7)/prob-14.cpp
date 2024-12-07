#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, y;
        cin >> x >> y;

        
        int total= x + 4 * y;
        int screens = (total + 14) / 15; 

        cout << screens << "\n";
    }
    return 0;
}
