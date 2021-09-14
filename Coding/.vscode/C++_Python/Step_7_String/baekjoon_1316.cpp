//https://www.acmicpc.net/problem/1316 - 그룹 단어 체커
#include<bits/stdc++.h>
using namespace std;

bool checkFunc(string S);

int main(){
    int N;
    int cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        
        if(checkFunc(S)) cnt++;
        
    }
    cout << cnt;
    return 0;
}

bool checkFunc(string S){
    bool alphabet[26] = {false};

    for (int j = 0; j < S.length(); j++)
    {
        if(alphabet[S[j]-'a']){
            return false;
        }else{
            char tmp = S[j];
            alphabet[S[j]-'a'] = true;

            while(1){
                    if(tmp != S[++j]){
                    j--;
                    break;
                 }
            }
         }
    }
    return true;
}