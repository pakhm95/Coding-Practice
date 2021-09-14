#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    M = M - 45;

    if (M < 0)
    {
        M = 60 + M;
        H = H - 1;
        if (H < 0)
        {
            H = 24 + H;
        }
    }
    cout << H << " " << M << endl;
    return 0;
}