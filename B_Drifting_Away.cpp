#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }

        // Check invalid adjacent patterns
        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if ((s[i] == '*' && s[i + 1] == '*') ||
                (s[i] == '>' && s[i + 1] == '<') ||
                (s[i] == '>' && s[i + 1] == '*') ||
                (s[i] == '*' && s[i + 1] == '<')) {
                valid = false;
                break;
            }
        }
        if (!valid) {
            cout << -1 << "\n";
            continue;
        }

        int ml = 0, mr = 0, cl = 0, cr = 0;
        for (char c : s) {
            if (c == '<') {
                cl++;
                ml = max(ml, cl);
                cr = 0;
            } else if (c == '>') {
                cr++;
                mr = max(mr, cr);
                cl = 0;
            } else if (c == '*') {
                cl++;
                ml = max(ml, cl);
                cr++;
                mr = max(mr, cr);
            } else {
                cl = cr = 0;
            }
        }

        cout << max(mr, ml) << "\n";
    }
    return 0;
}
