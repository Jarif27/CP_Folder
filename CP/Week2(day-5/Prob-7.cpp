#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

       
        unordered_map<char, int> freq;
        for (char c : s) 
        {
            freq[c]++;
        }

        
        
        priority_queue<int> oddFreqs;
        for (auto &[character, count] : freq) 
        {
            if (count % 2 != 0) 
            {
                oddFreqs.push(count);
            }
        }

        
        int removals = 0;
        while (!oddFreqs.empty() && removals < k) 
        {
            int top = oddFreqs.top();
            oddFreqs.pop();

           
            top--;  
            removals++;  
            if (top % 2 != 0) 
            {
                oddFreqs.push(top);  
            }
        }

        if (oddFreqs.size() <= 1 && removals <= k) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
    return 0;
}
