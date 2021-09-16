//https://www.acmicpc.net/problem/11653 - 소인수분해
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,cnt = 0, k;
    int prime[100] = {0};
    scanf("%d", &N);
    if(N == 1) return 0;
    k = 2;
    while(1){
        if(N == 1) break;

        if(N % k == 0){
            N = N / k;
            prime[cnt] = k;
            cnt++;
        }else{
            k++;
        }

    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d\n", prime[i]);
    }
    return 0;
}