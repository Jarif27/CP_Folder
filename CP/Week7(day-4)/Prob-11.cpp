#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) 
    {
        int N, K, P;
        cin >> N >> K >> P;

        vector<int> chairs(N);
        
        for (int i = 0; i < N; i++) 
        {
            cin >> chairs[i];
        }

        sort(chairs.begin(), chairs.end());
        
        int ved_chair = chairs.back();
        chairs.pop_back();

        int varun_chairsSum = 0;
        for (int chair : chairs) 
        {
            varun_chairsSum += chair;
        }

        int ved_height = K + ved_chair;
        int varun_height = P + varun_chairsSum;

        if (ved_height > varun_height) 
        {
            cout << "Ved" << endl;
        } 
        else if (ved_height < varun_height) 
        {
            cout << "Varun" << endl;
        } 
        else 
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}
