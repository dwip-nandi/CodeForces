#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        sort(x.begin(), x.end());

        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            if (x[l] + x[r] == k) {
                ++ans;
                ++l;
                --r;
            } else if (x[l] + x[r] < k) {
                ++l;
            } else {
                --r;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
