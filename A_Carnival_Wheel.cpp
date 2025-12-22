#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int l, a, b;
    cin >> l >> a >> b;
    int g = __gcd(l, b);
    int ans = l - g + (a % g);
    cout << ans << "\n";
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
