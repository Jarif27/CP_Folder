#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> p(n);  
        vector<char> s(n);  
        
        for (int i = 0; i < n; i++) 
        {
            cin >> p[i];
        }
        
        for (int i = 0; i < n; i++) 
        {
            cin >> s[i];
        }
        
        
        vector<int> liked, disliked;
        
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '1') 
            {
                liked.push_back(i);
            } 
            else 
            {
                disliked.push_back(i);
            }
        }
        
        
        vector<pair<int, int> > liked_ratings, disliked_ratings;
        
        for (int i = 0; i < liked.size(); i++) 
        {
            liked_ratings.push_back(pair<int, int>(p[liked[i]], liked[i]));
        }
        
        for (int i = 0; i < disliked.size(); i++) 
        {
            disliked_ratings.push_back(pair<int, int>(p[disliked[i]], disliked[i]));
        }
        
        
        sort(liked_ratings.begin(), liked_ratings.end());
        sort(disliked_ratings.begin(), disliked_ratings.end());
        
        
        vector<int> q(n);
        
        
        int current_rating = 1;
        for (int i = 0; i < disliked_ratings.size(); i++) 
        {
            q[disliked_ratings[i].second] = current_rating++;
        }
        
        
        for (int i = 0; i < liked_ratings.size(); i++) 
        {
            q[liked_ratings[i].second] = current_rating++;
        }
        
        
        for (int i = 0; i < n; i++) 
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
