//https://www.acmicpc.net/problem/3053 - 택시 기하학
#include<bits/stdc++.h>
using namespace std;

const double pi = 3.14159265358979;

int main(){
    int R;
    double Ur,Mr;
    scanf("%d",&R);
    Ur = R * R * pi; // 유클리드 기하학 원의 넓이
    Mr = R * R * 2.0; // 택시 기하학 원의 넓이

    printf("%.6f\n",Ur);
    printf("%.6f\n",Mr);
    return 0;
}