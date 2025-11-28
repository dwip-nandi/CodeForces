#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        int f = 0, e = 0;
        for (char ch : s) {
            if (ch == '4') f++;
            else e++;
        }

        int ax = abs(x), ay = abs(y);

        bool is = false;

        if (max(ax, ay) <= e) {
            is = true;
        }
        else {
            int dist = max(0, ax - e) + max(0, ay - e);
            if (dist <= f) is = true;
        }

        cout << (is ? "YES\n" : "NO\n");
    }
}
