#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> cards(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> cards[i];
        }

        priority_queue<int> bonusDeck;
        long long totalPower = 0;

    
        for (int i = 0; i < n; i++) 
        {
            if (cards[i] == 0) 
            {
               
                if (!bonusDeck.empty()) 
                {
                    totalPower += bonusDeck.top();
                    bonusDeck.pop();
                }
            } 
            else 
            {
                bonusDeck.push(cards[i]);
            }
        }

        cout << totalPower << endl;
    }

    return 0;
}
