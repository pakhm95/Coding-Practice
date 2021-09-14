//https://www.acmicpc.net/problem/1152 - 단어의 개수
#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    getline(cin,S);
    int count = 0;
    bool space = false;
    if(S.empty())
    {
        cout << "0";
        return 0;
    }
    count = 1;
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] == ' ')
            count++;
    }
    if(S[0] == ' ')
        count--;
    if(S[S.length()-1] == ' ')
        count--;

    cout << count;
    return 0;
}