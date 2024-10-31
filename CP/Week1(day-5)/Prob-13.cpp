#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <utility> // For std::pair
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n;
   cin >> n;

   deque<string> results; 
   vector<pair<string, int> > usernames; 
   
   for (int i = 0; i < n; i++) 
   {
      string username;
      cin >> username;
      
      bool found = false;
      for (size_t j = 0; j < usernames.size(); j++) 
      {
         if (usernames[j].first == username) 
         {
            found = true;
            int count = usernames[j].second++;
            string new_username = username + to_string(count);
            
            results.push_back(new_username);
            usernames.push_back(make_pair(new_username, 1)); 
            break;
         }
      }
      
      if (!found) 
      {
         results.push_back("OK");
         usernames.push_back(make_pair(username, 1)); 
      }
   }

    for (size_t k = 0; k < results.size(); k++) 
   {
      cout << results[k] << endl;
   }

   return 0;
}
