#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) c++;
    }

    if (c < s) {
        cout << -1 << endl;
        return;
    }
    if (c == s) {
        cout << 0 << endl;
        return;
    }

    int l = 0, cc = 0, mx = 0;
    for (int r = 0; r < n; r++) {
        if (v[r] == 1) cc++;

        while (cc > s) {
            if (v[l] == 1) cc--;
            l++;
        }

        if (cc == s) {
            mx = max(mx, r - l + 1);
        }
    }

    cout << n - mx << endl;
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}