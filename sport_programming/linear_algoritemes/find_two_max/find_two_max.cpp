#include <iostream>

using namespace std;

const int MAXN = 100000500;
const int MAXNVALUE = 1000000500;

int n;
int a[MAXN];

int main() {
    ios_base::sync_with_stdio(0); //Для оптимизации считывания
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }

    // int maxa = -MAXNVALUE - 1;
    // int maxa2 = -MAXNVALUE - 2;
    // for (int i = 0; i < n; i++)
    // {
    //     if (maxa < a[i]) {
    //         maxa2 = maxa;
    //         maxa = a[i];
    //     }
    //     else {
    //         if (maxa2 < a[i]) {
    //             maxa2 = a[i];
    //         }
    //     }
    // }
    // cout << maxa2 << endl;

    int max_index_1 = 0;
    int max_index_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[max_index_1] < a[i]) {
            max_index_2 = max_index_1;
            max_index_1 = i;
        }
        else {
            if (a[max_index_2] < a[i]) {
                max_index_2 = i;
            }
        }
    }
    cout << max_index_1 + 1 << " " << max_index_2 + 1 << endl;
}