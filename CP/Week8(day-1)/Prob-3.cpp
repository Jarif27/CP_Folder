#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t; 
    vector<string> results;

    while (t--) 
    {
        string a,b = "";
        cin >> a;
        
        for (int i = a.size()-1; i>=0; i--) 
        {
            if (a[i] == 'p') b += 'q';
            else if (a[i] == 'q') b += 'p';
            else b += 'w';
        }
        results.push_back(b);
    }

    
    for (int i=0; i<results.size(); i++) 
    {
        cout << results[i] << endl;
    }

    return 0;
}
