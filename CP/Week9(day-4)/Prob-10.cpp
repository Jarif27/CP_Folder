#include <iostream>
using namespace std;

int main() {
	int X;
    cin >> X;

   
    int durations[] = {1, 2, 4};
    int max = 0;

    
    for (int i = 0; i < 3; i++) 
    {
        if (X >= durations[i]) 
        {
            X -= durations[i];
            max++;
        } 
        else 
        {
            break;
        }
    }

   
    cout << max<< endl;
    return 0;

}
