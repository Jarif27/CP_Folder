#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, M, H;
        cin >> N >> M >> H;

        priority_queue<int> carCapacities;
        priority_queue<int> outletPowers; 

        
        for (int i = 0; i < N; ++i) 
        {
            int capacity;
            cin >> capacity;
            carCapacities.push(capacity);
        }

        for (int j = 0; j < M; ++j) 
        {
            int power;
            cin >> power;
            outletPowers.push(power);
        }

        long long totalEnergy = 0;

        
        while (!carCapacities.empty() && !outletPowers.empty()) 
        {
            int car = carCapacities.top();   
            int outlet = outletPowers.top(); 
            carCapacities.pop();
            outletPowers.pop();

            totalEnergy += min(car, outlet * H);
        }

        cout << totalEnergy << endl;
    }

    return 0;
}
