#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T;
    cin >>T;  

    while (T--) 
    {
        int N, X, Y;
        cin >>N>>X>>Y;  

        vector<int> A(N);  
        for (int i=0; i<N; i++) 
        {
            cin >> A[i];
        }

        int Cost = 0;

        for (int i=0; i<N; i++) 
        {
            
            int n_cost = A[i] * X;
            int m_cost = Y;

            
            Cost += min(n_cost, m_cost);
        }

        cout<<Cost <<endl;  
    }

    return 0;
}
