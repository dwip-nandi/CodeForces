#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    vector<int> pr(n+1, 0);
    for (int i = 0; i < n; i++) pr[i+1] = pr[i] + v[i];
    
    int ans = 0;
    for (int i = 0; i <= k; i++) {
        int l = 2*i;
        int r = n - (k-i);
        if (l <= r) {
            int sum = pr[r] - pr[l];
            ans = max(ans, sum);
        }
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
