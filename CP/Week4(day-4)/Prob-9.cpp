#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    map<long long, long long> freq;
    long long l = 0, count = 0, unique_count = 0;

    for (long long r = 0; r < n; r++) 
    {
        freq[a[r]]++;
        if (freq[a[r]] == 1) 
        {
            unique_count++;
        }

        while (unique_count > k) 
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0) 
            {
                unique_count--;
            }
            l++;
        }

        count += (r - l + 1);
    }

    cout << count << endl;

    return 0;
}
