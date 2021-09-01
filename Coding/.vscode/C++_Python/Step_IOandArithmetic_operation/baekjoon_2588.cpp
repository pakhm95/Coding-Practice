#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int R1 = B % 10;
    int R2 = (B % 100) / 10;
    int R3 = B / 100;

    cout << A * R1 << "\n";
    cout << A * R2 << "\n";
    cout << A * R3 << "\n";
    cout << A * B << "\n";
    return 0;
}