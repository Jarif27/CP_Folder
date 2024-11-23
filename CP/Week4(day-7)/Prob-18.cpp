#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int alphabet(char c) 
{
    return c-'a'+1;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;
        int n = s.length();

        vector<int> cost(n);
        for (int i = 0; i < n; ++i) 
        {
            cost[i] = alphabet(s[i]);
        }

        
        vector<int> path = {1}; 
        int totalcost = 0;
        int current = 0;

        
        while (current<n-1) 
        {
            int best_index = current + 1;
            for (int j = current + 1; j < n; ++j) 
            {
                if (abs(cost[current] - cost[j]) < abs(cost[current] - cost[best_index])) 
                {
                    best_index = j;
                }
            }

            
            path.push_back(best_index + 1); 
            totalcost += abs(cost[current] - cost[best_index]);

           
            current = best_index;
        }

        
        cout << totalcost << " " << path.size() << endl;
        for (int i = 0; i < path.size(); ++i) 
        {
            cout << path[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
