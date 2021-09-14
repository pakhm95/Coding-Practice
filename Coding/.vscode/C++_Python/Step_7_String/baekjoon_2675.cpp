//https://www.acmicpc.net/problem/2675 - 문자열 반복
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int R;
        string S;
        cin >> R >> S;
        for (int j = 0; j < S.length(); j++)
        {
            for (int k = 0; k < R; k++)
            {
                cout << S[j];
            }   
        }
        cout << "\n";
    }
    return 0;
}