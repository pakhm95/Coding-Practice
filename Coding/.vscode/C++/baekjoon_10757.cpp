#include <iostream>

using namespace std;

int main(){
    string A, B, result;
    cin >> A >> B;

    int carry = 0;
    int Firstsize = A.size();
    int Secondsize = B.size();

    while(Firstsize > 0 || Secondsize > 0){
        int N1  = 0;
        if(Firstsize > 0){
            N1 = A[--Firstsize] - '0';
        }
        int N2 = 0;
        if(Secondsize > 0){
            N2 = B[--Secondsize] - '0';
        }
        int Cur = N1 + N2 + carry;
        carry = Cur / 10;
        Cur %= 10;
        char ccar = Cur + '0';
        result += ccar;
    }
    if(carry > 0){
        result += carry + '0';
    }
    for(int i=result.length()-1;i>=0;i--){
        cout << result[i];
    }

    return 0;
}