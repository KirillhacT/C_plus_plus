#include <iostream>
#include <vector>

using namespace std;


void radix_sort(vector<int>& arr) {
    vector<vector<int>> buckets(10);
    int power_of_ten = 1;
    int d = arr.size();
    for (int pow = 0; pow <= d; ++pow) { //pow - длина числа
        for (auto elem: arr) {
            buckets[elem / power_of_ten % 10].push_back(elem); //elem = 1234 - 4
        }
        arr.clear();
        for (int i = 0; i < buckets.size(); ++i) {
            for (int j = 0; j < buckets[i].size(); ++j) {
                arr.push_back(buckets[i][j]);
                buckets[i].clear();
            }
        }
        power_of_ten *= 10;
    }
}

int main() {
    vector<int> arr = {34, 12, 3, 90, 4, 5};
    radix_sort(arr);
    for (auto x: arr) {
        cout << x << endl;
    }
}

