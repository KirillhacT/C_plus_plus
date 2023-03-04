#include <iostream>

using namespace std;

long long bin_pow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n) {
        if (n & 1) {
            res *= a;
            res %= mod;
        }
        n >>= 1;
        a *= a;
        a %= mod;
    }
    return res;
}

int main() {
    long long mod = 10000000007; //[1, 10000000006]
    cout << 2 * bin_pow(5, mod - 2, mod) % mod << endl;
}