#include <iostream>
#include <vector>
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

    long long l = 0, sum = 0, count = 0;

    for (long long r = 0; r < n; r++) 
    {
        sum += a[r];
        

        while (sum >= s) 
        {
            count += (n - r); 
            sum -= a[l];
            l++;
        }
    }

    cout << count << endl;

    return 0;
}
