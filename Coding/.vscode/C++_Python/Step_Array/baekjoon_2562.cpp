//https://www.acmicpc.net/problem/2562 - 최댓값
#include <iostream>
using namespace std;

int main(){
    int data[9], R;

    for (int i = 0; i < 9; i++)
    {
        cin >> data[i];
    }
    int max = 0;
    for (int i = 0; i < 9; i++)
    {
        if( data[i] > max){
            max = data[i];
            R = i;
        }
    }
    cout << max << "\n";
    cout << R + 1 << "\n";
    return 0;
}