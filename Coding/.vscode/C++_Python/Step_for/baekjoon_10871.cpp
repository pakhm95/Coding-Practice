//https://www.acmicpc.net/problem/10871 - X보다 작은 수
#include <iostream>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;

    int A[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    for (int i = 0; i < N; i++)
    {
        if (A[i] < X)
        {
            cout << A[i] << " ";
        }
    }
    return 0;
}