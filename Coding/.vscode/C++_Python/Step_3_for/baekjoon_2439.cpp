//https://www.acmicpc.net/problem/2439 - 별 찍기-2
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = N - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        
        cout << "\n";
    }
    return 0;
}