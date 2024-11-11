#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_array(const vector<int>& arr) 
{
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) 
    {
        result = gcd(result, arr[i]);
        if (result == 1) 
        {
            return 1;
        }
    }
    return result;
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }

        int arr_gcd = gcd_array(A);
        bool possible = true;
        for (int i = 0; i < N; i++) 
        {
            if (A[i] % arr_gcd != 0)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
