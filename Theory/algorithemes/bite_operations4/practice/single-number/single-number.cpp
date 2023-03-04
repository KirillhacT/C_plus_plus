#include <iostream>
#include <vector>

using namespace std;

int single_num(const vector<int>& arr) {
    int n = arr.size();
    int ans = 0;
    for (auto x: arr) {
        ans ^= x;
    }
    return ans;
}

int main() {
    vector<int> arr {2, 2, 1, 3, 1};
    cout << single_num(arr) << endl;
}