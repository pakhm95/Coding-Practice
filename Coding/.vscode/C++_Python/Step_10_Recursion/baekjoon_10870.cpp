//https://www.acmicpc.net/problem/10870 - 피보나치 수 5
#include<bits/stdc++.h>
using namespace std;

int recursion(int n);

int main(){
    int N, re;
    scanf("%d", &N);
    re = recursion(N);
    printf("%d\n", re);
}

int recursion(int n){
    if(n <= 1) return n;
    return recursion(n-1) + recursion(n-2);
}