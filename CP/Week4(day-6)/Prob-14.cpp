#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
        int n, c;
        cin >> n >> c; 

        vector<int> a(n);
        vector<int> costs(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            costs[i] = a[i] + (i + 1); 
        }

        
        sort(costs.begin(), costs.end());

        int count = 0; 
        for (int cost : costs) 
        {
            if (c >=cost) 
            {
                c -= cost;
                count++;
            } 
            else 
            {
                break; 
            }
        }

        cout<< count <<endl; 
    }

    return 0;
}
