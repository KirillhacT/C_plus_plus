#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums {1, 2, 3};
    vector<int> arr {2, 2, 1};
    int n = arr.size();
    for (int mask = 0; mask < (1 << n); mask++)
    //mask - числа от 0 до 2^n, откуда мы берем биты
    {
        bool first = true;
        cout << "{";
        for (int i = 0; i < n; i++)
        //i - число, ссылка на элемент массива, и конкретный бит
        {
            if (mask & (1 << i)) {
                if (!first)
                    cout << ", ";
                first = false;
                cout << arr[i];
            }
        }
        cout << "}";
        cout << endl;
    }
    cout << (7 ^ 2) << endl;
}