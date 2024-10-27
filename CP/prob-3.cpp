#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;
    
    if (A > B) 
    {
        cout << 0 << endl;
    } 
    else 
    {
        cout << B - A + 1 << endl; 
    }
    
    return 0;
}
