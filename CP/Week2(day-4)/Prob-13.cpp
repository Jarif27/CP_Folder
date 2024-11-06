#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> s(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> s[i];
        }

       
        priority_queue<int> bonusDeck;
        long long armyPower = 0;
        
        
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == 0) 
            {
                
                if (!bonusDeck.empty()) 
                {
                    armyPower += bonusDeck.top();
                    bonusDeck.pop();
                }
            } 
            else 
            {
                bonusDeck.push(s[i]);
            }
        }

        
        cout << armyPower << endl;
    }

    return 0;
}
