#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    vector<int> results;

    while (t--) 
    {
        int n;
        cin >> n; 
        
        string s;
        cin >> s; 

        // Find the first and last b cell.
        int left = -1, right = -1;

        for (int i=0; i<n; i++) 
        {
            if (s[i] == 'B')
            {
                if (left == -1) left = i; 
                right = i; //updating right to the latest b found.
            }
        }

        //length of the segment to be painted white.
        int min_length = right-left+1;
        
        results.push_back(min_length);
    }

    // Output all results. 
    for (size_t i=0; i<results.size(); i++)
    {
        cout << results[i] <<endl;
    }

    return 0;
}
