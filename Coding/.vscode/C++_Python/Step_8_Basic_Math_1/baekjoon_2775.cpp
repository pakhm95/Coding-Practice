//https://www.acmicpc.net/problem/2775 - 부녀회장이 될테야(파스칼의 삼각형)
#include<bits/stdc++.h>
using namespace std;

int combi(int k, int n);

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int k = 0,n = 0;
        cin >> k >> n;
        int answer = combi(k,n);
        cout << answer << "\n";
    }
    return 0;
}

int combi(int n, int r){
    if(r == 1)
    return 1;
    if(n == 0)
    return r;

    return (combi(n-1,r)+combi(n,r-1));
}