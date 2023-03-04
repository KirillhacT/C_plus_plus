#include <iostream>

using namespace std;




int factorial(int n) {
    if (n == 1) {
        return n;
    }
    return factorial(n-1) * n;
}

int fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    // cout << fibonacci(6) << '\n';
    // cout << factorial(10) << endl;
}