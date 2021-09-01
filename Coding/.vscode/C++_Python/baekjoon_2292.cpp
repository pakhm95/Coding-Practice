//https://www.acmicpc.net/problem/2292 - 벌집
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 1;
    long long range = 1;
    long long tmp = 1;

    while(1){
        if(range >= n){
            break;
        }
        tmp = 6 * (cnt++);
        range += tmp;
    }

    cout << cnt;

    return 0;
}