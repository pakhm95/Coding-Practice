// https:\\www.acmicpc.net/problem/11022 - A+B - 8
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int A, B;
        cin >> A >> B;
        cout << "Case " << "#" << i << ": ";
        cout << A << " + " << B << " = " << A + B << "\n";
    }
    return 0;
}