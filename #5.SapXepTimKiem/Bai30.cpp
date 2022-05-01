#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int& x : a) {
        cin >> x;
    }
    sort(a, a + n);
    double max_val = max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; i++) {
        double x = ((double)a[i] - a[i - 1]) / 2;
        if (x > max_val) {
            max_val = x;
        }
    }
    cout << fixed << setprecision(10) << max_val << endl;
    return 0;
}