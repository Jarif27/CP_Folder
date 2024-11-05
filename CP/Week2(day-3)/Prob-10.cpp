#include <iostream>
#include <map>
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
        map<int, int> cnt;
        for (int i = 1; i <= n; i++) 
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        priority_queue<int> pq;
        for (map<int, int>::iterator it = cnt.begin(); it != cnt.end(); ++it)
        {
            pq.push(it->second);
        }

        while (pq.size() >= 2) 
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--, y--;
            if (x >= 1) 
            {
                pq.push(x);
            }
            if (y >= 1) 
            {
                pq.push(y);
            }
        }

        int ans = 0;
        while (!pq.empty()) 
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << '\n';
    }

    return 0;
}

