#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;  
    set<string> possessed;  

    for (int i = 0; i < n; ++i) 
    {
        string name;
        cin >> name;  
        
        
        if (possessed.find(name) != possessed.end()) 
        {
            cout << "YES" << endl;  
        } 
        else 
        {
            cout << "NO" << endl;  
            possessed.insert(name);  
        }
    }

    return 0;
}
