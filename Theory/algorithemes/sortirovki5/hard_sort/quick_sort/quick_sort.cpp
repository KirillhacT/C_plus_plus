#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int i, int j) {
    int pivot = i;
    int s1_index = i;
    int s2_index = i;
    for (int k = i + 1; k < j; k++)
    {
        if (!(arr[k] >= arr[pivot])) {
            ++s1_index;
            swap(arr[s1_index], arr[k]);
        }
        ++s2_index;
        // if (arr[k] >= arr[pivot])
        //     ++s2_index;
        // else {
        //     ++s1_index;
        //     swap(arr[s1_index], arr[k]);
        //     ++s2_index;
        // }

    } // 27 12 38 39 27 16
      // 27 | 12 16 | 39 27 38
      // | 12 16 | 27 | 39 27 38
    swap(arr[pivot], arr[s1_index]);
    return s1_index;
}

void quick_sort(vector<int>& arr, int i, int j) {
    if (i == j) {
        return;
    }
    int pivot = partition(arr, i, j); //[i, pivot - 1] < [pivot + 1, j]
    quick_sort(arr, i, pivot);
    // quick_sort(arr, pivot + 1, j);
}

void quick_sort(vector<int>& arr) {
    quick_sort(arr, 0, arr.size()); 
}

int main() {
    vector<int> arr = {4, 3, 1, 2, 6, 9, 1};
    quick_sort(arr);

    for (auto x: arr) {
        cout << x << endl;
    }
}