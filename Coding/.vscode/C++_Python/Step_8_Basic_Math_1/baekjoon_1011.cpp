//https://www.acmicpc.net/problem/1011 - Fly me to the Alpha Centauri
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long x, y;
        long long N = 0, m = 0;
        cin >> x >> y;

        while (N * N <= (y - x))
        {
            N++;
        }
        N--;
        m = 2 * N - 1;
        long long rem = (y - x) - N * N;
        rem = (long long)ceil((double)rem / (double)N);
        m += rem;
        printf("%lld\n",m);
    }
    return 0;
}