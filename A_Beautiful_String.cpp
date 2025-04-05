#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            for (char c : {'a', 'b', 'c'}) {
                if (i > 0 && s[i - 1] == c) continue;
                if (i < n - 1 && s[i + 1] == c) continue;
                s[i] = c;
                break;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cout << "-1\n";
            return;
        }
    }

    cout << s << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
