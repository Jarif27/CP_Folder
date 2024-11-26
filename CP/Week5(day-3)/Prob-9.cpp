#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> result;

        
        for (int i=1; i<=k+1; i++) 
        {
            result.push_back(i);
        }

        for (int i = n; i > k + 1; i--) 
        {
            result.push_back(i);
        }

        
        for (int num : result) 
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
