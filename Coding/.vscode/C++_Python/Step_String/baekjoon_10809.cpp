//https://www.acmicpc.net/problem/10809 - 알파벳 찾기
#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> S;

    for(int i = 0; i < alphabet.length(); i++){
        cout << (int)S.find(alphabet[i],0) << " ";
    }
}