#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        int max_val = INT_MIN, max_pos = -1;
        int min_val = INT_MAX, min_pos = -1;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] > max_val) {
                max_val = v[i];
                max_pos = i;
            }
            if (v[i] < min_val) {
                min_val = v[i];
                min_pos = i;
            }
        }

        string s;
        cin >> s;

        if (s[0] == '1' || s[n - 1] == '1' || s[max_pos] == '1' || s[min_pos] == '1') {
            cout << -1 << "\n";
            continue;
        }

        int mn = min(min_pos, max_pos) + 1;
        int mx = max(min_pos, max_pos) + 1;

        cout << 5 << "\n";
        cout << 1 << " " << mn << "\n";
        cout << 1 << " " << mx << "\n";
        cout << mn << " " << mx << "\n";
        cout << mn << " " << n << "\n";
        cout << mx << " " << n << "\n";
    }
}
