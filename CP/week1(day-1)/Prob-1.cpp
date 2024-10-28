#include <iostream>
#include <vector>
using namespace std;

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >>n;
    
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >>cards[i];
    }
    
    int serejaScore = 0, dimaScore = 0;
    int left = 0, right = n-1;
    
    bool serejaTurn = true;
    
    while (left <= right)
     {
        if (cards[left] > cards[right]) 
        {
            if (serejaTurn) 
            {
                serejaScore += cards[left];
            } 
            else
            {
                dimaScore += cards[left];
            }
           
            left++;
        } 
        else 
        {
            if (serejaTurn)
            {
                serejaScore += cards[right];
            } 
            else 
            {
                dimaScore += cards[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn; 
    }
    
    cout << serejaScore << " " << dimaScore << endl;
    return 0;
}
