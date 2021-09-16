//https://www.acmicpc.net/problem/2581 - 소수
#include<bits/stdc++.h>
using namespace std;

void primeSieve(int num,int a[]);

int main(){
    int M, N, sum = 0;
    scanf("%d",&M);
    scanf("%d",&N);
    int a[N + 1] = {0}, min = N;
    primeSieve(N + 1, a);
    for (int i = M; i <= N; i++)
    {
        if(a[i] < min && a[i] != 0) min = a[i];
        sum += a[i];
    }
    if(sum == 0){
        printf("-1\n");
        return 0;
    } 
    printf("%d\n%d\n", sum, min);
    return 0;
}
void primeSieve(int num,int a[]){
    for (int i = 2; i <= num; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i <= num; i++)
    {
        if(a[i] == 0) continue;
        for (int j = i + i; j <= num; j+=i)
        {
            a[j] = 0;
        }
    }
}