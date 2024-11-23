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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> tools(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> tools[i];
        }

        
        sort(tools.rbegin(), tools.rend());

        int current_timer = b;
        int total_seconds = 0;

        for (int i = 0; i < n; ++i) 
        {
            if (current_timer == 0) break; 
            
            
            int increment = tools[i];
            if (current_timer + increment > a) 
            {
                increment = a - current_timer; 
            }

            
            current_timer += increment;

            
            --current_timer;
            ++total_seconds;

           
            if (current_timer == 0) 
            {
                break;
            }
        }

        
        total_seconds += current_timer;

        cout << total_seconds << endl;
    }

    return 0;
}
