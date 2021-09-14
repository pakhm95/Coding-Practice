//https://www.acmicpc.net/problem/10818 - 최소, 최대
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int data[N];
    for (int i = 0; i < N; i++)
    {
        cin >> data[i];
    }
    int max = data[0];
    int min = data[0];
    for (int i = 1; i < N; i++)
    {
        if(data[i] > max) max = data[i];
        if(data[i] < min) min = data[i];
    }
    printf("%d %d", min, max);
    return 0;
}