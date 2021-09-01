#include <iostream>
using namespace std;

int main(){
    int A;
    cin >> A;

    if (90 <= A)
    {
        cout << "A" << "\n";
        return 0;
    }else if (80 <= A)
    {
        cout << "B" << "\n";
        return 0;
    }else if (70 <= A)
    {
        cout << "C" << "\n";
        return 0;
    }else if (60 <= A)
    {
        cout << "D" << "\n";
        return 0;
    }else
    {
        cout << "F" << "\n";
        return 0;
    }
}