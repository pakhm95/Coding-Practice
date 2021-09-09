//https://www.acmicpc.net/problem/4673 - 셀프 넘버
#include<iostream>
#include<vector>
using namespace std;

int D_Function(int a){  // 셀프 넘버를 검출하기 위한 함수
    int sum = a;

    while(a != 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main(){
    vector<bool> number(10000,0);
    
    for(int i = 0; i < number.size(); i++){
        int idx = D_Function(i);
        number[idx] = true;
    }
    for(int i = 0; i < number.size(); i++){
        if(!number[i]){
            printf("%d\n", i);
        }
    }
    return 0;
}

/*셀프 넘버 = 해당 함수에 넣었을때 나오지 않는 숫자. 즉, 1부터 10000까지의 정수를 
             함수에 넣었을때 나오지 않는 숫자들을 말함*/