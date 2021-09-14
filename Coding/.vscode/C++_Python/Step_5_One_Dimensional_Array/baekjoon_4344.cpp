//https://www.acmicpc.net/problem/4344 - 평균은 넘겠지
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, C, avg;
    int AG[1000] = {0};

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        avg = 0;
        cin >> C;
        for (int j = 0; j < C; j++)
        {
           cin >> AG[j];
           avg += AG[j];
        }
        avg /= C;
        int cnt = 0;
        for (int j = 0; j < C; j++)
        {    
           if(AG[j] > avg){
               cnt++;
           }
        }
        double avg2 = (double)cnt / (double)C * 100;
        cout << fixed;
        cout.precision(3);
        cout << avg2 << "%" << "\n";
    }
    return 0;
}