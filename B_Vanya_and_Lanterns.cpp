#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int maxDiff = 0;
    for (int j = 0; j < n - 1; j++) {
        maxDiff = max(maxDiff, v[j + 1] - v[j]);
    }

    double maxRadius = max(maxDiff / 2.0, max((double)v[0], (double)(l - v[n - 1])));
    cout << fixed << setprecision(10) << maxRadius << endl;

    return 0;
}
