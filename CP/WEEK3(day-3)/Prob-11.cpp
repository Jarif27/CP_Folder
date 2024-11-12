#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >>n>>s;
        
        int left = 0, right = n-1;
        
        
        while (left < right && s[left] != s[right]) 
        {
            left++;
            right--;
        }
        
       
        int result = (left <= right) ? (right - left + 1) : 0;
        cout << result << "\n";
    }
    return 0;
}
