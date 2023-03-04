#include <iostream>
#include <vector>

using namespace std;

bool binary_search(const vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        int current = arr[middle];
        if (current == x) {
            return true;
        }
        if (current < x) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return false;
}


int main() {
    vector<int> arr {1, 2, 3, 4, 5, 6, 9};
    int x = 456;
    cout << binary_search(arr, x) << endl;
}