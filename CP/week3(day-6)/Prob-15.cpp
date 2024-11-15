#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    vector<string> results(T);
    for (int t = 0; t < T; ++t) 
    {
        int N;
        cin >> N;
        long long sum = 0, max_val = 0;
        for (int i = 0; i < N; ++i) 
        {
            int num;
            cin >> num;
            sum += num;
            if (num > max_val) max_val = num;
        }
        if (sum % N == 0 && max_val <= sum / N) 
        {
            results[t] = "YES";
        } 
        else 
        {
            results[t] = "NO";
        }
    }
    
    for (const string &res : results) 
    {
        cout << res << '\n';
    }
    return 0;
}
