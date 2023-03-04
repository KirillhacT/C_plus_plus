#include <iostream>

using namespace std;

const int MAXN = 100000500;

int n;
int a[MAXN], partSum[MAXN];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    partSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        partSum[i] = partSum[i - 1] + a[i];
    }
    int q;
    for (int query = 0; query < q; query++)
    {
        int l, r;
        cin >> l >> r;
        cout << partSum[r] - partSum[l - 1] << '\n';
    }
}