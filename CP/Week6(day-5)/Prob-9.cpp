#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        int n, m;
        cin >>n>>m;

        vector<string> words(n);
        for (int i=0; i<n; ++i) 
        {
            cin >> words[i];
        }

        int total =0, x =0;
        for (int i=0; i<n; ++i) 
        {
            if (total + words[i].size() <= m) 
            {
                total += words[i].size();
                ++x;
            } 
            else 
            {
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}
