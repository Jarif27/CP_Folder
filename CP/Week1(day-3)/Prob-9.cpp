#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n; 
    
    set<string> unique_leav; //store unique leaves

    
    for (int i=0; i<n; ++i)
    {
        string species, color;
        cin >> species >>color; 
        
        unique_leav.insert(species + " " + color); //store unique combination
    }

    // Output the number of unique leaves
    cout << unique_leav.size() << endl;

    return 0;
}