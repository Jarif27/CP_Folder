#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
 {
    int t;
    cin >> t;
    cin.ignore(); // ignore newline after reading t

    while (t--) 
    {
        string input;
        getline(cin, input);
        deque<char> result;

        for (char ch : input) 
        {
            if (ch == 'b') 
            {
                auto it = result.rbegin();
                while (it != result.rend() && !islower(*it)) 
                {
                    ++it;
                }
                
                if (it != result.rend()) 
                {
                    result.erase(next(it).base());
                }
            } 
            
            else if (ch == 'B') 
            {
                auto it = result.rbegin();
                while (it != result.rend() && !isupper(*it)) 
                {
                    ++it;
                }
                if (it != result.rend()) 
                {
                    result.erase(next(it).base());
                }
            } 
            else 
            {
                result.push_back(ch);
            }
        }

        
        for (char ch : result) 
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
