//https://www.acmicpc.net/problem/1002 - 터렛
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int x1,y1,r1,x2,y2,r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int d = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
        int sum = (r1 + r2) * (r1 + r2);
        int diff = (r1 - r2) * (r1 - r2);

        if(d == 0){
            if(diff == 0){
                printf("-1\n");
            }else{
                printf("0\n");
            }
        }else if(d == sum || d == diff){
            printf("1\n");
        }else if(diff < d && d < sum){
            printf("2\n");
        }else{
            printf("0\n");
        }
    }
    return 0;
}