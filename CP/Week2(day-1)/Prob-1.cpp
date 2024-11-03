#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;

    vector<int> result;
    
    for (int i = 0; i < N; i++) 
    {
        int value;
        cin >> value;
        if (value != X) 
        {
            result.push_back(value);
        }
    }

    for (int i = 0; i < result.size(); i++) 
    {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    
    cout << endl;
    
    return 0;
}
