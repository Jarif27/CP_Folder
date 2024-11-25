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
        long long K;
        cin >> N>>K;

        vector<long long> A(N);
        for (int i=0; i<N; i++) 
        {
            cin >> A[i];
        }

        long long minimum = -1;  

        for (int i=0; i<N; i++) 
        {
            if (A[i] >= K) 
            {  
                long long waste = A[i] % K;

                if (minimum == -1 || waste < minimum) 
                {
                    minimum = waste;  
                }
            }
        }

        cout << minimum << endl;  
    }

    return 0;
}
