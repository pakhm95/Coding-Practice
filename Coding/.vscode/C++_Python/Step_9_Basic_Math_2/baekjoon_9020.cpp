//https://www.acmicpc.net/problem/9020 - 골드바흐의 추측
#include<bits/stdc++.h>
using namespace std;

int prime[10001] = {0};
int num = 10000;

void primeSieve(int prime[], int num){
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

int main() {
    primeSieve(prime, num);
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N, r,min = 10000;
        int a[1][2] = {0};
        scanf("%d", &N);

        for (int j = 2; j <= N; j++)
        {
            if(prime[j] == 0) continue;

            r = N - prime[j];
            if(prime[r] != 0){
                if(abs(prime[j] - r) < min){
                     min = abs(prime[j] - r);
                     a[0][0] = prime[j];
                     a[0][1] = r;
                }
            }
        }
        printf("%d %d\n", a[0][0], a[0][1]);
    }
    return 0;
}