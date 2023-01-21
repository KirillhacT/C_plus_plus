#include <iostream>
#include <vector>
#include <string>

using namespace std;

void choice_sort(vector <int> &A)
{
    int N = A.size();
    for (int pos = 0; pos < N-1; pos++)
        for (int i = pos+1; i < N; i++)
            if (A[i] < A[pos])
                swap(A[i], A[pos]);
}
void insertion_sort(vector <int> &A)
{
    int N = A.size();
    for (int pos = 1; pos < N; pos++)
    {
        int i = pos;
        while (i > 0 && A[i-1] > A[i]) {
            swap(A[i], A[i - 1])
            i -= 1;
        }
    }
}

int main() 
{
    vector<int> A = {3, 1, 4, 5, 2};
    choice_sort(A);
    for (auto x: A)
        cout << x << endl;
}