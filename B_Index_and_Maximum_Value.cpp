#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        ll mx = 0;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        while (m--) {
            char c;
            ll a, b;
            cin >> c >> a >> b;
            if (mx < a) {
                cout << mx << ' ';
            } else if (a <= mx && mx <= b) {
                if (c == '+') {
                    mx++;
                } else {
                    mx--;
                }
                cout << mx << ' ';
            } else {
                cout << mx << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
