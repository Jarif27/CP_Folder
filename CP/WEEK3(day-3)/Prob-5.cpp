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
        int N, M, H;
        cin >> N>>M>>H;

        vector<int> car_capacity(N);
        vector<int> outlet_power(M);

        for (int i = 0; i < N; i++) 
        {
            cin >> car_capacity[i];
        }

        for (int i = 0; i<M; i++) 
        {
            cin >> outlet_power[i];
        }

        
        sort(car_capacity.rbegin(), car_capacity.rend());
        sort(outlet_power.rbegin(), outlet_power.rend());

        int total_energy = 0;
        int limit = min(N, M); 

       
        for (int i = 0; i<limit; i++) 
        {
            total_energy += min(car_capacity[i], outlet_power[i] * H);
        }

        cout << total_energy << endl;
    }

    return 0;
}
