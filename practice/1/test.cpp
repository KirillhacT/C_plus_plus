#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// int test(int n, int k) {
//     int minutes = 4 * 60;
//     int one_task = 5;

//     // int n, k;
//     // cin >> n >> k;
//     minutes -= k;
//     int count = 0;
//     int q = 5;
//     while (minutes >= q && count != n) {
//         count++;
//         minutes -= q;
//         q += 5;
//     } 
//     return count;
// }

int main() {
    vector<int> arr {4, 1, 2, 7, 3};
    sort(arr.begin(), arr.end());
    for (auto x: arr) {
        cout << x << endl;
    }
}