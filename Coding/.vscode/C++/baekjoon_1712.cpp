#include <iostream>

using namespace std;

int main(){
    int A, B ,C;
    cin >> A; // 고정(지출)비
    cin >> B; // 변동(지출)비
    cin >> C; // 매출(개당)비

    int Q = A / (C - B);

    if(B >= C){
        Q = -1;
    }else{
        Q = Q + 1;
    }

    cout << Q << "\n";

    return 0;
}