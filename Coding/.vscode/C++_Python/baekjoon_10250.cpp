//https://www.acmicpc.net/problem/10250 - ACM 호텔
#include <iostream>

using namespace std;

int main(){
    int T = 0, R = 0;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int H = 0, W = 0, N = 0;
        cin >> H >> W >> N;

        if (N % H == 0)
        {
            R = (H * 100) + (N / H);
            cout << R << "\n";
        }else
        {
            R = (N % H) * 100 + (N / H) + 1;
            cout << R << "\n";
        }
    }
    return 0;
}