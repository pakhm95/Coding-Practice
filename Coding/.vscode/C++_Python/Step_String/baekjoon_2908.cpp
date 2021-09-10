//https://www.acmicpc.net/problem/2908 - 상수
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    char tmp;
    cin >> s1 >> s2;

    tmp = s1[0];
    s1[0] = s1[2];
    s1[2] = tmp;
    
    tmp = s2[0];
    s2[0] = s2[2];
    s2[2] = tmp;

    int num1 = stoi(s1);
    int num2 = stoi(s2);

    cout << (num1 > num2 ? num1 : num2);

    return 0;
}