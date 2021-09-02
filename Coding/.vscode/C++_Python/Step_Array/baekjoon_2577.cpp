//https://www.acmicpc.net/problem/2577 - 숫자의 갯수
#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    int digit[10] = {0};
    cin >> A >> B >> C;

    int num = A * B * C;

    while (num != 0)
    {
        int R = num % 10;
        digit[R] += 1;
        num /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << digit[i] << "\n";
    }
    return 0;    
}