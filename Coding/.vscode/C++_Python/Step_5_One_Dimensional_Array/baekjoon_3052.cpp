//https://www.acmicpc.net/problem/3052 - 나머지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp % 42);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

     cout << v.size() << "\n";

    
}