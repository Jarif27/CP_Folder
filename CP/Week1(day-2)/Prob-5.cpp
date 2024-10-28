#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    // Convert int to string
    string result = to_string(N);

    // set length is 4
    while (result.length() < 4)
    {
        result = '0' + result;
    }

    cout << result << endl;

    //alternative approach
    //cout << setw(4) << setfill('0') << N << endl;
    //here setw(4) means sets the minimum width and setfill(0) mean fills any space in the output with 0

    return 0;
}
