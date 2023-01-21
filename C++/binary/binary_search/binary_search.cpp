#include<iostream>
#include<vector>
#include<string>


using namespace std;

typedef double T;

int left_boundary(T x, const vector<T> &A)
{
    int left = -1;
    while (left < int(A.size()) && A[left + 1] < x)
    {
        left += 1;
    }
    return left;
}

int right_boundary(T x, const vector<T> &A)
{
    int right = A.size();
    while (right > 0 && A[right-1] > x)
    {
        right -= 1;
    }
    return right;
}

int binary_search_left(T x, const vector<T> &A)
{
    int left = -1;
    int right = A.size();

    while (right - left > 1)
    {
        int middle = (right + left) / 2;
        if (A[middle] < x)
            left = middle;
        else
            right = middle;
    }
    return left;
}

int binary_search_right(T x, const vector<T> &A)
{
    int left = -1;
    int right = A.size();

    while (right - left > 1)
    {
        int middle = (right + left) / 2;
        if (A[middle] <= x)
            left = middle;
        else
            right = middle;
    }
    return right;
}



int main() 
{
    T x;
    cin >> x;
    vector <T> A = {2, 2, 4, 5, 5, 5, 7, 7, 7, 7, 9};
    // int left = left_boundary(x, A);
    // int right = right_boundary(x, A);

    int left = binary_search_left(x, A);
    int right = binary_search_right(x, A);
    cout << "left= " << left << "\t" << "right= " << right << "\n";

}