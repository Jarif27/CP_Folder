#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        map<string, vector<int> > mp;
        for (int i = 1; i <= 3; i++) 
        
        {  
            for (int j = 0; j < n; j++) 
            {
                string s;
                cin >> s;
                mp[s].push_back(i);  
            }
        }

        vector<int> ans(4);  

        for (const auto& [word, players] : mp) 
        {
            if (players.size() == 1) 
            {  
                ans[players[0]] += 3;
            } 
            else if (players.size() == 2) 
            {  
                ans[players[0]]++;
                ans[players[1]]++;
            }
            
        }

        for (int i = 1; i <= 3; i++) 
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
