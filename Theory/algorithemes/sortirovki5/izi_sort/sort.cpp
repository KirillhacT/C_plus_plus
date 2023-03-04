#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> arr) {
    for (auto x: arr) {
        cout << x << endl;
    }
}

void selection_sort(vector<int> arr) {
    int N = arr.size();
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    print_vector(arr);
}

void bubble_sort(vector<int> arr) {
    int N = arr.size();
    for (int i = 0; i < N - 1; i++)
    {
        bool is_sorted = true;
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                is_sorted = false;
            }
        }
        if (is_sorted)
            print_vector(arr);
            return;
    }
    print_vector(arr);
}

//!
void insertion_sort(vector<int> arr) {
    int N = arr.size();
    for (int i = 1; i < N; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = current;
    }
    
    print_vector(arr);
}

void counting_sort(vector<int> arr) {
    int minimum = arr[0];
    int maximum = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
        if (arr[i] < minimum)
            minimum = arr[i];
    }
    vector<int> bucket(maximum - minimum + 1);
    for (int i = 0; i < arr.size(); i++)
    {
        bucket[arr[i]- minimum]++;
    }
    arr.clear();
    for (size_t i = 0; i < bucket.size(); i++)
    {
        int count = bucket[i];
        for (int j = 0; j < count; j++) {
            arr.push_back(i + minimum);
        }
    }
    
    
    
}


int main() {
    vector<int> arr {3, 1, 6, 2, 4};
    // selection_sort(arr);
    // bubble_sort(arr);
    // insertion_sort(arr);
    counting_sort(arr);
}