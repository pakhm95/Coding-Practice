#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int input1;
    string input2;
    int R1 = 0;
    cin >> input1;
    cin >> input2;

    while (input1 > 0)
    {
        int N;
        N = input2[--input1] - '0';
        R1 += N;
    }
    
    cout << R1;

    return 0;
}