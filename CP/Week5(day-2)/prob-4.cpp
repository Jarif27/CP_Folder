#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, M;
        cin >> N >> M;

        string S, K;
        cin >> S >> K;

        int minimum = INT_MAX;

        for (int i=0; i<= N-M; i++) 
        {
            int current = 0;

            for (int j=0; j<M; j++) 
            {
                int digit_S = S[i + j] - '0';
                int digit_K = K[j] - '0';

                int diff = abs(digit_S - digit_K);
                current += min(diff, 10 - diff);
            }

            minimum = min(minimum, current);
        }

        cout << minimum << endl;
    }

    return 0;
}
