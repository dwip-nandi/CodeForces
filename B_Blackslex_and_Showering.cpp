#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    vector<int> vr1, vr2;
    for (int i = 1; i < n; i++) {
        vr1.push_back(abs(a[i] - a[i-1]));
        sum += vr1.back();
    }
    for (int i = 2; i < n; i++) {
        vr2.push_back(abs(a[i] - a[i-2]));
    }

    int ans = sum;
    ans = min(ans, sum - vr1[0]);
    ans = min(ans, sum - vr1[n-2]);
    for (int i = 1; i < n-1; i++) {
        ans = min(ans, sum - (vr1[i-1] + vr1[i]) + vr2[i-1]);
    }

    cout << ans <<endl;
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) query();
    return 0;
}
