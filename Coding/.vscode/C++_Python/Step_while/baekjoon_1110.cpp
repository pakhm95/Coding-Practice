//https://www.acmicpc.net/problem/1110 - 더하기 사이클
#include <iostream>
using namespace std;

int main(){
    int N, A, B, C,F,cnt;
    cin >> N;
    cnt = 0;
    F = N;

    while(1){
        if(N < 10){
        A = 0;
        B = N;
            }else{
        A = N / 10;
        B = N % 10;
            }
        C = (A + B) % 10;
        N = B * 10 + C;
        cnt++;
        if(N == F){
            break;
        }
    }
    cout << cnt << "\n";
}