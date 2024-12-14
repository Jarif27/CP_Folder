#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() 
{
    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    
    for (long long i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    long long l = 0, sum = 0, minLength = LLONG_MAX;

    for (long long r = 0; r < n; r++) 
    {
        sum += a[r];

        while (sum >= s) 
        {
            minLength = min(minLength, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

   
    if (minLength == LLONG_MAX) 
    {
        cout << -1 << endl; 
    } else 
    {
        cout << minLength << endl;
    }

    return 0;
}
