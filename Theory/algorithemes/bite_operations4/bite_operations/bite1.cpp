#include<iostream>
#include<vector>

using namespace std;

int main() {
    //Основные операции
    // cout << (51 & 25) << endl; //17 - and
    // cout << (51 | 25) << endl; //59 - or
    // cout << (51 ^ 25) << endl; //42 - xor
    // cout << (~23u) << endl; //not
    // cout << (12 << 2) << endl; //48 - left shift
    // cout << (12 >> 2) << endl; //3 - right shift

    int n = 10; //1010
    n = n | (1 << 2);
    cout << n << '\n'; //14
    n = n & ~(1 << 2);
    cout << n << '\n';
    int x = 7; //111
    x = x ^ (1 << 0);
    //0 - 6; 1 - 5; 2 - 3; 3 - 15
    //110 101 11 1111
    cout << x << endl;
    if ((x & (1 << 0)) == 0) { //Если первый бит равен 0
        cout << "First bit is null" << endl;
    }
    else {
        if (x & (1 << 0)) {
            cout << "First bit is not null" << endl;
        }
    }
}
