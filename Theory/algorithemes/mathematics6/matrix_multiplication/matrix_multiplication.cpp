#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrix_mul(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    vector<vector<int>> C(A.size(), vector<int>(B[0].size()));
    //первый параметр: кол-во элементов, второй параметр, чем заполняет
    int n = A.size();
    int m = A[0].size();
    int k = B[0].size();
    for (int i = 0; i < n; ++i) { //2
        for (int j = 0; j < k; ++j) //2
        {
            for (int k = 0; k < m; ++k) //3
                C[i][j] += A[i][k] * B[k][j];
                //C[0][0] += A[0][0] * B[0][0] 
                //C[0][0] += A[0][1] * B[1][0]
                //C[0][0] += A[0][2] * B[2][0]
                //(1 * 1) + (2 * 3) + (3 * 1) = 1 + 6 + 3 = 10

                //C[0][1] += A[0][0] * B[0][1] 
                //C[0][1] += A[0][1] * B[1][1]
                //C[0][1] += A[0][2] * B[2][1]
                //...
                
                //C[1][0] += A[1][0] * B[0][0] 
                //C[1][0] += A[1][1] * B[1][0]
                //C[1][0] += A[1][2] * B[2][0]
                //...

                //C[1][1] += A[1][0] * B[0][1] 
                //C[1][1] += A[1][1] * B[1][1]
                //C[1][1] += A[1][2] * B[2][1]
                //...
        }
    }

}

int main() {
    vector<vector<int>> A = {
        //матрица 2 по 3
        {1, 2, 3},
        {3, 1, 2},
    };
    vector<vector<int>> B = {
        //матрица 3 по 2
        {1, 2},
        {3, 2},
        {1, 2},
    };
    vector<vector<int>> C = {
        //матрица 2 по 2
        {10, 12},
        {8, 12},
    };
    cout << (matrix_mul(A, B) == C) << endl; 
}