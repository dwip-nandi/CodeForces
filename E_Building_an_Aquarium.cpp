#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

bool canBuild(const vector<int>& v, int h, int w) {
    long long water = 0;
    for (int x : v) {
        if (x < h) water += (h - x);
        if (water > w) return false;
    }
    return water <= w;
}

void query() {
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    int l = 1, r = mx + w, ans = 1;
    while (l <= r) {
        int mid = (l + r)>>1;
        if (canBuild(v, mid, w)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1; 
        }
    }
    cout << ans << endl;
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) query();
    return 0;
}
