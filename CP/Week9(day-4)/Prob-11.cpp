#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    const int total = 1000;

    for (int i = 0; i < T; ++i) 
    {
        int H, L, W;
        cin >> H >> L >> W;

        int surface = 2 * (L * W + L * H + W * H);
        int maxgifts = total / surface;

        cout << maxgifts << endl;
    }

    return 0;
    
}