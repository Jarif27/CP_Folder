#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }

        int score = 0;
        int operations = N / 2;

        for (int i = 0; i < N - 1 && operations > 0; i++) 
        {
            if (A[i] != A[i + 1]) 
            {
                score++;
                operations--;
            }
        }

        cout << score << endl;
    }

    return 0;
}
