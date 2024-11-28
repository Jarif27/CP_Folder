#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() 
{
    long long n, k;
    cin>>n>>k;
    vector<long long> a(n);

    for (long long i=0; i<n; i++) 
    {
        cin >> a[i];
    }

    deque<long long> maxDeque, minDeque;
    long long l = 0, count = 0;

    for (long long r = 0; r < n; r++) 
    {
        
        while (!maxDeque.empty() && a[maxDeque.back()] <= a[r]) 
        {
            maxDeque.pop_back();
        }
        maxDeque.push_back(r);

        
        while (!minDeque.empty() && a[minDeque.back()] >= a[r]) 
        {
            minDeque.pop_back();
        }
        minDeque.push_back(r);

        
        while (a[maxDeque.front()] - a[minDeque.front()] > k) 
        {
            l++;
            if (maxDeque.front() < l) maxDeque.pop_front();
            if (minDeque.front() < l) minDeque.pop_front();
        }

        
        count += (r-l+1);
    }

    cout<< count <<endl;

    return 0;
}
