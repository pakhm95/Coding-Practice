//https://www.acmicpc.net/problem/4948 - 베르트랑 공준
#include<bits/stdc++.h>
using namespace std;

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

int main(){
    while (1)
    {
        int n;
        scanf("%d", &n);
        if(n == 0) break;

        int prime[2 * n + 1] = {0};
        int num = 2 * n;

        primeSieve(prime, num);
        int sum = 0;
        for (int i = n + 1; i <= 2 * n; i++)
        {
            if(prime[i] != 0) sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}