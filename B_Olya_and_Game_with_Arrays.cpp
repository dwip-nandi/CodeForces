#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n;
    cin >> n;
    int sum = 0, gm = LLONG_MAX, ssm = LLONG_MAX;

    while (n--) {
        int m;
        cin >> m;
        int a = LLONG_MAX, b = LLONG_MAX;

        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            if (x < a) {
                b = a;
                a = x;
            } else if (x < b) {
                b = x;
            }
        }
        sum += b;
        gm = min(gm, a);
        ssm = min(ssm, b);
    }

    cout << sum + gm - ssm << endl;
}

signed main() {
    fast_io;
    int t; cin >> t;
    while (t--) query();
    return 0;
}
