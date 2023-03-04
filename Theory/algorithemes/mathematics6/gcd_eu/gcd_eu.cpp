#include <iostream>

using namespace std;

int gcd(int a, int b) {
    //Наибольший общий делитель
    // if (b == 0) {
    //     return a;
    // }
    //Если b не ноль, возвращаем функцию gcd, иначе a
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
    //Наименьшее общее кратное
    return a / gcd(a, b) * b;
}

int main() {
    cout << gcd(45, 12345) << '\n';
    cout << lcm(15, 24) << '\n';
}