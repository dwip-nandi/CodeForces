#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (i == 0) {
            s = a;
        } else {
            string f = a + s;
            string b = s + a;
            s = min(f, b);
        }
    }
    cout << s <<endl;
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
