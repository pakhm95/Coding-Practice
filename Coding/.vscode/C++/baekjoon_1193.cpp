#include <iostream>

using namespace std;

int main(){
    int input;
    int i = 1;

    cin >> input;

    while(input > i){
        input -= i;
        i++;
    }

    if(i % 2 == 1){
        cout << i + 1 - input << "/" << input << "\n";
    }else{
        cout << input << "/" << i + 1 - input << "\n";
    }
}