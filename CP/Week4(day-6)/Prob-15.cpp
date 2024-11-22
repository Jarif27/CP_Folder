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
        cin >>a>>b>>n;
        
        vector<int> tools(n);
        for (int i=0; i<n; i++) 
        {
            cin >> tools[i];
        }

        
        sort(tools.rbegin(), tools.rend());

        int timeleft = b; 
        int timeElapsed = 0;

      
        for (int i=0; i<n; i++) 
        {
            
            timeleft = min(timeleft + tools[i], a);
            timeElapsed++; 

            
            if (timeleft > 0) 
            {
                timeleft--;
            }
        }

        
        while (timeleft > 0) 
        {
            timeleft--;
            timeElapsed++;
        }

        cout << timeElapsed << endl;
    }

    return 0;
}
