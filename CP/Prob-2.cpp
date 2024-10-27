#include <iostream>
using namespace std;

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;
    
    // Calculate the smallest multiple of C that is greater than or equal to A
    int small_multiple = ((A + C - 1) / C) * C;
    
    
    if (small_multiple <= B) 
    {
        cout << small_multiple << endl; 
    } 
    else 
    {
        cout << -1 << endl; 
    }
    
    return 0;
}
