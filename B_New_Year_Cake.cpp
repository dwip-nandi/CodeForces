#include <bits/stdc++.h>
using namespace std;

int quue(long long a, long long b, bool s) {
    int l = 0;
    long long sz = 1;
    bool w = s;

    while (true) {
        if (w) {
            if (a < sz) break;
            a -= sz;
        } else {
            if (b < sz) break;
            b -= sz;
        }
        l++;
        sz *= 2;
        w = !w;
    }
    return l;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        int ans = max(quue(a, b, true), quue(a, b, false));
        cout << ans << endl;
    }
    return 0;
}
