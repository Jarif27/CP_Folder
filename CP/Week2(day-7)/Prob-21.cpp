#include <iostream>
#include <string>
#include <vector>
using namespace std;


int calculateTypingTime(const string& s) 
{
    int time = 2; 
    for (size_t i = 1; i < s.length(); ++i) 
    {
        if (s[i] == s[i - 1]) 
        {
            time += 1;
        } 
        else 
        {
            time += 2;
        }
    }
    return time;
}

int main() 
{
    int t;
    cin >> t; // Number of test cases
    while (t--) 
    {
        string s;
        cin >> s;

        string bestPassword;
        int maxTime = 0;

        
        for (size_t i = 0; i <= s.size(); ++i) 
        {
            for (char ch = 'a'; ch <= 'z'; ++ch) 
            {
                string newPassword = s;
                newPassword.insert(i, 1, ch); 
                
                int typingTime = calculateTypingTime(newPassword);

                
                
                if (typingTime > maxTime) 
                {
                    maxTime = typingTime;
                    bestPassword = newPassword;
                }
            }
        }

        
        cout << bestPassword << endl;
    }

    return 0;
}
