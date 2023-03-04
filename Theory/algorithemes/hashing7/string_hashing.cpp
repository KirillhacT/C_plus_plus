#include <iostream>
#include <vector>

using namespace std;

long long string_hash(const string& s) {
    const int p = 31;
    const int m = 1e9 + 7;
    long long hash = 0;
    long long prime_pow = 1;
    for (auto ch: s) {
        hash = (hash + (ch - 'a' + 1) * prime_pow) % m;
        prime_pow = (prime_pow * p) % m;
    }
    return hash;
}


int main() {
    // string s1 = "aaa";
    // string s2 = "abb";
    // string s3 = "abb";

    // cout << string_hash(s1) << endl;
    // cout << string_hash(s2) << endl;
    // cout << string_hash(s3) << endl;
    
    //319171894 - adqwe
    //dlfadqwesdjfsjdnfa

    string s = "dlfadqwesdjfsjdnfa"; //319171894
    vector<long long> hashes(s.size() + 1);
    vector<long long> primes(s.size() + 1);
    hashes[0] = 0;
    primes[0] = 1;

    const int p = 301;
    const int m = 1e9 + 7;

    for (int i = 0; i < s.size(); i++)
    {
        hashes[i + 1] = hashes[i] * p + (s[i] - 'a' + 1);
        hashes[i + 1] %= m;
        primes[i + 1] = primes[i] * p;
        primes[i + 1] %= m;
    }
    // cout << hashes[s.size()] << endl;
    // return 0;


    int i = 3, j = 7; 
    long long substr_hash = (hashes[j + 1] - (hashes[i] * primes[j - i + 1]) % m) % m;
    if (substr_hash < 0)
        substr_hash += m;

    cout << substr_hash << '\n';
}