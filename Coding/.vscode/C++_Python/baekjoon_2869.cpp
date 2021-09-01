//https://www.acmicpc.net/problem/1712 - 달팽이는 올라가고 싶다
#include <iostream>

using namespace std;

int main(){
    int A = 0, B = 0, V = 0;
    cin >> A >> B >> V;

    int Cnt = 0;
    int i = 0;

    Cnt = (V - B - 1) / (A-B) + 1;
    cout << Cnt;
}