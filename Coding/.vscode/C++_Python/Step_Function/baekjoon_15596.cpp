//https://www.acmicpc.net/problem/15596 - 정수 N개의 합
#include <bits/stdc++.h>
using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
    for(int i = 0; i < a.size(); i++){
        ans += a[i];
    }
	return ans;
}