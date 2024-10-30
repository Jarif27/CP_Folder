#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    long long totalSum = 0;
    int smallestOdd = 1e9 + 1; 
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> numbers[i];
        totalSum += numbers[i];
        
        if (numbers[i] % 2 != 0) 
        {
            smallestOdd = min(smallestOdd, numbers[i]);
        }
    }

   
    if (totalSum % 2 == 0)
    {
        cout<<totalSum<<endl;
    } 
    
    else 
    {
        
        cout << totalSum - smallestOdd << endl;
    }
    
    return 0;
}
