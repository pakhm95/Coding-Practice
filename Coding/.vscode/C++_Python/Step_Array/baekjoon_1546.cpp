//https://www.acmicpc.net/problem/1546 - 평균
#include <iostream>
using namespace std;

int main(){
    int N = 0;
    double M = 0, Avg = 0;
    cin >> N;

    double score[N];

    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
        if(score[i] > M){
            M = score[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        score[i] = score[i] / M * 100;
        Avg += score[i];
    }
    cout << Avg / (double)N << "\n";
    return 0;
}