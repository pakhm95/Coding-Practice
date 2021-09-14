#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    double R;

    R = (double)A / B;

    cout << fixed;
    cout.precision(9);
    cout << R;
}