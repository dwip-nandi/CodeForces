#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int s = 0, c = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] <= q) {
                c++; 
            } else {
                if (c >= k) {
                    int e = c - k + 1;
                    s += (e * (e + 1)) / 2; 
                }
                c = 0; 
            }
        }

        if (c >= k) {
            int e = c - k + 1;
            s += (e * (e + 1)) / 2;
        }

        cout << s << endl;
    }
}
