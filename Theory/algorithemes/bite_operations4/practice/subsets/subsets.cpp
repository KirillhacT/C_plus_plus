#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> get_vec(const vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> new_vector;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        vector<int> sub_vector = {};
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i)) {;
                sub_vector.push_back(nums[i]);
            }
        }
        new_vector.push_back(sub_vector);
    }
    return new_vector;
}

int main() {
    vector<int> vec {1, 2, 3, 4, 5};
    auto new_vec = get_vec(vec);
    cout << new_vec[1][0] << endl;;
}