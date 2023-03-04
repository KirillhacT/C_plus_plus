#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve(int n) {
    //n = 12
    vector<bool> mark(n, true);
    //[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
    vector<int> primes;
    primes.push_back(2);
    for (int i = 3; i * i <= n; i += 2) //До корня n
    {
        if (mark[i]) {
            for (int j = i * i; j < n; j += i) {
                //9, 12
                mark[j] = false;
            }
        }
        //[true, true, true, -> true, true, true, true, true, true, false, true, true, false, true]
    }
    for (int i = 3; i < n; i += 2) {
        cout << i << endl;
        if (mark[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
int main() {
    vector<int> prives = sieve(14);
    // for (auto x: prives) {
    //     cout << x << " ";
    // }
}