#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int> > station_indices;

        for (int i = 1; i <= n; i++) 
        {
            int station;
            cin >> station;
            station_indices[station].insert(i);
        }

        for (int i = 0; i < m; i++) 
        {
            int a, b;
            cin >> a >> b;

            if (station_indices.find(a) == station_indices.end() || station_indices.find(b) == station_indices.end()) 
            {
                cout << "NO" << '\n';
            } 
            else 
            {
                int start_index = *station_indices[a].begin();
                int end_index = *station_indices[b].rbegin();
                
                if (start_index < end_index) 
                {
                    cout << "YES" << '\n';
                } 
                else 
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }

    return 0;
}
