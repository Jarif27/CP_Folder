#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A,B;
    cin >>A>>B;

    int option1 = A+(A-1); 
    int option2 = B+(B-1); 
    int option3 = A+B;       

    // Find the maximum options
    // int max_coins = max({option1, option2, option3}); //This is compatible with older C++ standards.

    int max_coins = max(option1, max(option2, option3));
    cout << max_coins << endl;

    return 0;
}
