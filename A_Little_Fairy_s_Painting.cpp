#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            s.insert(x);
        }

        int d = s.size();

        auto it = s.lower_bound(d);
        if (it != s.end()) {
            cout << *it << endl;
        } else {
            cout << *prev(s.end()) << endl;
        }
    }
}
