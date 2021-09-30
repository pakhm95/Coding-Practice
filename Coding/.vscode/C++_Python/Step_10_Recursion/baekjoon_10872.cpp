//https://www.acmicpc.net/problem/10872 - 팩토리얼
#include<bits/stdc++.h>
using namespace std;

int recursion(int n);

int main(){
    int N,results;
    scanf("%d", &N);
    results = recursion(N);
    printf("%d\n", results);
    return 0;
}

int recursion(int n){
    if(n <= 1) return 1;
    return n * recursion(n-1);
}