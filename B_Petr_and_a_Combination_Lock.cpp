#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int mask = 0; mask < (1 << n); ++mask) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) sum += a[i];
            else sum -= a[i];
        }
        sum %= 360;
        if (sum < 0) sum += 360;
        if (sum == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
