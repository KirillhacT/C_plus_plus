#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
    
int euler(int n) {
    int count = 1;
    for (int i = 2; i < n; ++i)
    {
        if (gcd(i, n) == 1)
            count += 1;
    }
    return count;
}

int euler_fast(int n) {
    int result = n;
    int prime = 2;
    while (n >= prime * prime) {
        if (n % prime == 0) {
            result = result / prime * (prime - 1);
            while (n % prime == 0) {
                n /= prime;
            }
        }
        ++prime; //2, 3, 4, 5, 6, 7, 8
    }
    if (n != 1) {
        result = result / n * (n - 1);
    }
    return result;
}


int main() {

}