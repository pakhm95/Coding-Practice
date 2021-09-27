//https://www.acmicpc.net/problem/4153 - 직각삼각형
#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int a, b, c, min, max, mid;
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;
        
        max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
        mid = (a >= b && a <= c) ? a : (b >= a && b <= c) ? b :
              (c >= a && c <= b) ? c : (a >= c && a <= b) ? a :
              (b >= c && b <= a) ? b : c;
        min = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b : c;

        if(max*max == mid*mid + min*min){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
    return 0;
}