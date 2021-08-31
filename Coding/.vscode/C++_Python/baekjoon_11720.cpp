#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int input1;
    cin >> input1;

    int input2;
    cin >> input2;

    int R1 = input1 / pow(10,(input2 - 1));
    cout << R1;
    
    return 0;
}