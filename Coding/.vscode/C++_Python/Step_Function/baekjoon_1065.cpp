//https://www.acmicpc.net/problem/1065 - 한수
#include<bits/stdc++.h>
using namespace std;

int checkAP(int A){
    int count = 99;
    int N;
    if(A >= 1000) N = 4;
    else N = 3; 

    for (int i = 100; i <= A; i++)
    {
        int tmp = i;
        int j = 0,B[N];
        while (tmp != 0)
        {
            B[j] = tmp % 10;
            tmp /= 10;
            j++;
        }
        if(i < 1000){
            if(B[0] - B[1] != B[1] - B[2]){
                continue;
            }else{
                count++;
            }  
        }else{
            if(B[0] - B[1] != B[1] - B[2] || B[1] - B[2] != B[2] - B[3]){
                continue;
            }else{
                count++;
            }
        }
    }
    return count;
}

int main(){
    int X;
    cin >> X;
    if(X < 100){
        printf("%d\n",X);
        return 0;
    }else{
        int result = checkAP(X);
        printf("%d\n",result);
    }
}
/*다른 사람들의 풀이를 봤는데 내 코드보다 간결하고 명확하게 짠것같다.
    주로 함수를 따로 빼지 않고 그 자리에서 N%100/10*2 == N/100+N%10 <- 이 문장을 비교하여 해결하였다.*/