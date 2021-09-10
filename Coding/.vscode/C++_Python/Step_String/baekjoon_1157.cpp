//https://www.acmicpc.net/problem/1157 - 단어 공부
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string S,tmp;
    cin >> S;

    for (int i = 0; i < S.length(); i++)
    {
        S[i] = toupper(S[i]);
    }

    vector<char> VS(S.begin(),S.end());

    sort(VS.begin(),VS.end());
    VS.erase(unique(VS.begin(),VS.end()),VS.end());

    int cnt[VS.size()] = {0};

    for (int i = 0; i < VS.size(); i++)
    {
        for (int j = 0; j < S.length(); j++)
        {
            if(VS[i] == S[j]){
                cnt[i] += 1;
            }
        }
    }
    int max = 0, land;
    int icnt = 0;
    for (int i = 0; i < VS.size(); i++)
    {
        if(cnt[i] > max) {
            max = cnt[i];
        }
    }
    for (int i = 0; i < VS.size(); i++)
    {
        if(cnt[i] == max) {
            icnt++;
            land = i;
        }
    }
    if(icnt >=2) printf("?\n");
    else printf("%c\n", VS[land]);
    return 0;
}