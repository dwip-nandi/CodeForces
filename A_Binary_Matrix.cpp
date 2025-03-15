#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> r(n, 0), c(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == '1') {
                    r[i]++;
                    c[j]++;
                }
            }
        }

        int rc = 0, cc = 0;
        for (int i = 0; i < n; i++) {
            if (r[i] % 2 != 0) {
                rc++;
            }
        }
        for (int j = 0; j < m; j++) {
            if (c[j] % 2 != 0) {
                cc++;
            }
        }
        int ans = max(rc, cc);
        cout << ans << endl;
    }
    return 0;
}
