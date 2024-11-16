#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    deque<string> chatList;
    unordered_map<string, bool> chatMap; 

    for (int i = 0; i < n; i++) 
    {
        string recipient;
        cin >> recipient;

        
        if (!chatMap[recipient]) 
        {
            chatList.push_front(recipient);
            chatMap[recipient] = true;
        } 
        else 
        {
            deque<string> temp;
            temp.push_front(recipient); 

           
            for (const string& name : chatList) 
            {
                if (name != recipient) 
                {
                    temp.push_back(name);
                }
            }
            chatList = temp; 
        }
    }

    
    for (const string &name : chatList)
    {
        cout << name << endl;
    }

    return 0;
}
