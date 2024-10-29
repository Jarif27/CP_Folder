#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    cin >> S;
    
    // Boolean array to track presence of each letter
    bool present[26] = {false};
    
    // Mark letters that appear in S.and here size_t represent sizes and counts
    for (size_t i = 0; i < S.length(); ++i) 
    {
        char ch = S[i];
        present[ch - 'a'] = true;
    }
    
   
    bool found = false;
    
    //check missing letter 
    for (int i=0; i<26; i++) 
    {
        if (!present[i]) 
        {
            cout << char('a'+i) << endl;
            found = true;
            break;
        }
    }
    
    //if all letters are present,then output "None"
    if (!found) 
    {
        cout<<"None"<<endl;
    }
    
    return 0;
}
