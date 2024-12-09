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
        cin >>N;

        vector<int> A(N), B(N);
        for (int i=0; i<N; ++i) cin >> A[i]; 
        for (int i=0; i<N; ++i) cin >> B[i]; 

        int Day = 0;
        for (int i=0; i<N; ++i) 
        {
            if (B[i] <=2 * A[i] && A[i] <=2 * B[i]) 
            {
                ++Day;
            }
        }

        cout <<Day<< endl;
    }

    return 0;
}
