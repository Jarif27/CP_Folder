#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long max_sum = 0;
        int min_operations = 0;
        bool in_negative_segment = false;
        
        // Traverse the array to calculate max sum and minimum operations
        for (int i = 0; i < n; ++i) {
            max_sum += abs(a[i]);  // Add the absolute value for max sum
            
            // If we encounter a negative number and it's not part of an ongoing negative segment
            if (a[i] < 0) {
                if (!in_negative_segment) {
                    in_negative_segment = true;
                    min_operations++;  // New negative segment found, count one operation
                }
            } else {
                // End of a negative segment
                in_negative_segment = false;
            }
        }
        
        // Output the result for the current test case
        cout << max_sum << " " << min_operations << "\n";
    }
    
    return 0;
}
