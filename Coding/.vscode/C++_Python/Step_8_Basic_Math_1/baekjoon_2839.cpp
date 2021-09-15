//https://www.acmicpc.net/problem/2839 - 설탕 배달
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    int answer = 0;
    while(1){
        if(N % 5 == 0){
            answer += N / 5;
            printf("%d\n",answer);
            break;
        }
        N -= 3;
        answer++;
        if(N < 0){
            printf("-1\n");
            break;
        }
    }
    return 0;
}