//https://www.acmicpc.net/problem/1085 - 직사각형에서 탈출
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int minx = min(x, w - x);
    int miny = min(y, h - y);
    cout << min(minx, miny) << "\n";
    return 0;
}