//https://www.acmicpc.net/problem/1978 - 소수 찾기
#include<bits/stdc++.h>
using namespace std;

bool prime(int a);

int main(){
    int N,cnt = 0;
    cin >> N;
    unsigned int num[N] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        if(prime(num[i])){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}

bool prime(int num){
    if(num < 2){
        return false;
    }
    for (int j = 2; j*j <= num; j++)
    {
        if(num % j == 0){
            return false;
        }
    }
    return true;
}