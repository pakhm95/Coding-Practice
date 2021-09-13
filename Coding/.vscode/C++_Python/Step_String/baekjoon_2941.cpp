//https://www.acmicpc.net/problem/2941 - 크로아티아 알파벳
#include<bits/stdc++.h>
using namespace std;

int main(){
    string croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string T;
    cin >> T;
    
    for (int i = 0; i < 8; i++)
    {
        int s = 0;
        s = T.find(croatia[i]);
        if(s != -1){
            T.replace(T.find(croatia[i]),croatia[i].size(),"1");
            i--;
        }
    }
    cout << T.length() << "\n";
}