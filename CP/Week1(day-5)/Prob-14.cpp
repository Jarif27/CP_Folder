#include <iostream>
#include <map>
#include <string>
#include <deque>
using namespace std;

int main() 
{

    int n, m;
    cin >> n >> m;

    // map to store the IP and corresponding server name
    map<string, string> ipToName;

    
    for (int i = 0; i < n; ++i) 
    {
        string name, ip;
        cin >> name >> ip;
        ipToName[ip] = name; // Store IP and name in the map
    }

    deque<string> results; 

    
    for (int j = 0; j < m; ++j) 
    {
        string command, ip;
        cin >> command >> ip;
        
        
        ip.pop_back(); 

        
        string serverName = ipToName[ip];

        
        string result = command + " " + ip + "; #" + serverName;
        
        
        results.push_back(result);
    }

    
    for (const string& res : results) 
    {
        cout << res << endl;
    }

    return 0;
}
