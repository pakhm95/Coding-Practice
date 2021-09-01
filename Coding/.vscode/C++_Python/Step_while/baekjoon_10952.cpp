//https://www.acmicpc.net/problem/10952 - A+B - 5
#include <iostream>
using namespace std;

int main(){
    while (1)
    {
        int A, B;
        cin >> A >> B;

        if(A == 0 && B == 0){
            break;
        }

        cout << A + B << "\n";
    }
    return 0;
}