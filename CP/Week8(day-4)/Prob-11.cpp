#include <iostream>
#include <vector>
#include <algorithm>
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
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }

       
        sort(A.rbegin(), A.rend());

        long long total_cost = 0;
        for (int i = 0; i < N; ++i) 
        {
            int discounted_cost = max(A[i] - i, 0);
            total_cost += discounted_cost;
        }

        cout << total_cost << endl;
    }

    return 0;
}
