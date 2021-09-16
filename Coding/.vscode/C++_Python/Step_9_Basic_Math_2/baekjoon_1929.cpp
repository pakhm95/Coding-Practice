//https://www.acmicpc.net/problem/1929 - 소수 구하기
#include<bits/stdc++.h>
using namespace std;

void primeSieve(int prime[], int num){      // Sieve of Eratosthenes - 에라토스테네스의 체
    for (int i = 2; i <= num; i++)
    {
        prime[i] = i;
    }
    for (int i = 2; i <= num; i++)
    {
        if(prime[i] == 0) continue;
        for (int j = i + i; j <= num; j += i)
        {
            prime[j] = 0;
        }
    }
}

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int prime[N+1] = {0};
    int num = N;
    primeSieve(prime,num);

    for (int i = M; i <= N; i++)
    {
        if(prime[i] == 0) continue;
        printf("%d\n", prime[i]);
    }
    return 0;
}