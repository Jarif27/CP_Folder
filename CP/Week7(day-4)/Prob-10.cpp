#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        string S, T;
        cin >> S >> T;

        int countS0 = 0, countS1 = 0;
        int countT0 = 0, countT1 = 0;

        for (char c : S) 
        {
            if (c == '0') countS0++;
            else countS1++;
        }

        for (char c : T) 
        {
            if (c == '0') countT0++;
            else countT1++;
        }

        if (countS0 == countT0 && countS1 == countT1) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
