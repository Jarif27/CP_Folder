#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    vector<int> contests(n);
    for (int i=0; i<n; i++) 
    {
        cin >> contests[i];
    }
    
    
    sort(contests.begin(), contests.end());
    
    int day = 0;  
    
    for (int i=0; i<n; i++) 
    {
        
        if (contests[i] >= day + 1) 
        {
            day++;
        }
    }
    
    cout << day << endl;
    return 0;
}
