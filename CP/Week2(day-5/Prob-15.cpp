#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        
        
        map<int, set<int> > mp;
        
        for (int i = 1; i <= n; i++) 
        {
            int x;
            cin >> x;
            mp[x].insert(i);  
        }

        
        for (int i = 1; i <= m; i++) 
        {
            int l, r;
            cin >> l >> r;
            
            
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end()) 
            {
                cout << "NO" << '\n';
            } 
            else 
            {
                
                int startStationLeftMostIndex = *mp[l].begin();
                int endStationRightMostIndex = *mp[r].rbegin();
                
                
                if (startStationLeftMostIndex < endStationRightMostIndex) 
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
