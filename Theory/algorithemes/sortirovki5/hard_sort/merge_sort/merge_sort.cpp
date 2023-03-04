#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int>& left, vector<int>& right) {
    vector<int> merged;
    int left_index = 0, right_index = 0;
    while (left_index < left.size() && right_index < right.size()) {
        if (left[left_index] <= right[right_index]) 
            merged.push_back(left[left_index++]);
        else
            merged.push_back(right[right_index++]);
    }
    while (left_index < left.size()) {
        merged.push_back(left[left_index++]);
    }
    while (right_index < right.size()) {
        merged.push_back(right[right_index++]);
    }
    return merged;
}

void merge_sort(vector<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }
    vector<int> left, right;
    int N = arr.size() / 2;
    for (int i = 0; i < N; i++)
    {
        left.push_back(arr[i]);
    }
    for (int i = N; i < arr.size(); i++)
    {
        right.push_back(arr[i]);
    }
    //left и right изменит функция merge_sort
    merge_sort(left); //[1, 3]
    merge_sort(right); //[2, 4, 5]
    //Сдесь идет само присваивание
    arr = merge(left, right);

}

int main() {

}