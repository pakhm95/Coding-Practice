//https://www.acmicpc.net/problem/3009 - 네 번째 점
#include<bits/stdc++.h>
using namespace std;

int main(){
    int codi[3][2] = {0},cnt = 0;
    int resultX, resultY;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> codi[i][j];
        }
    }
    if(codi[0][0] == codi[1][0]){
        resultX = codi[2][0];
    }
    else if(codi[0][0] == codi[2][0]){
        resultX = codi[1][0];
    }else{
        resultX = codi[0][0];
    }
    if(codi[0][1] == codi[1][1]){
        resultY = codi[2][1];
    }
    else if(codi[0][1] == codi[2][1]){
        resultY = codi[1][1];
    }else{
        resultY = codi[0][1];
    }
    cout << resultX << " " << resultY << "\n";
    return 0;
}