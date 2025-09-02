#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long f, a, b;
        cin >> n >> f >> a >> b;

        vector<long long> m(n);
        for (int i = 0; i < n; ++i) {
            cin >> m[i];
        }

        long long prev = 0;
        bool possible = true;

        for (int i = 0; i < n; ++i) {
            long long gap = m[i] - prev;
            long long cost = min(gap * a, b);
            f -= cost;
            if (f <= 0) {
                possible = false;
                break;
            }
            prev = m[i];
        }

        cout << (possible ? "YES" : "NO") <<endl;
    }
    return 0;
}
