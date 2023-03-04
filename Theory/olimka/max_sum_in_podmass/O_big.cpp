#include <iostream>
#include <vector>

using namespace std;

int o3_n(const vector<int>& arr) {
    int best = 0;
    int n = arr.size();
    
    //Цикл первичного указателя
    for (int i = 0; i < n; i++)
    {
        //Цикл вторичного указателя
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            //Цикл суммы
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            best = max(best, sum);
        }
        
    }
    return best;
}

int o2_n(const vector<int>& arr) {
    int best = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
        }
        best = max(best, sum);   
    }
    return best;
}

int o_n(const vector<int>& arr) {
    int best = 0, sum = 0;
    for (int k = 0; k < arr.size(); k++)
    {
        //1, 3, -7, 4, 9
        sum = max(arr[k], sum+arr[k]);
        best = max(sum, best);
    }
    return best;
    
}

int main() {
    //Максимальная сумма в подмассиве
    vector<int> arr{1, 2, -10, 4, 5};
    // int a = o3_n(arr);
    // cout << a << endl;

    // int a = o2_n(arr);
    // cout << a << endl;

    // int a = o_n(arr);
    // cout << a << endl;
}