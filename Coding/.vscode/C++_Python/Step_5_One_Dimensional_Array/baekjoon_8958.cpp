//https://www.acmicpc.net/problem/8958 - OX퀴즈
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string A;
        int R = 0,total = 0;
        cin >> A;
        for (int j = 0; j < A.size(); j++)
        {
            char B = A[j];
            if(B == 'O'){
                R += 1;
            }else if (B == 'X')
            {
                R = 0;
            }
            total += R;
        }
        cout << total << "\n";
    }
    return 0;
}