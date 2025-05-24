#include <bits/stdc++.h>
using namespace std;
#define int long long

string quire(int m) {
    cout << m << endl;
    cout.flush();
    string s;
    cin >> s;
    return s;
}

signed main() {
    int l = 1, r = 1e6, ans = 0;
    while (l <= r) {
        int m = (l + r) >> 1;
        if (quire(m) == "<") {
            r = m - 1;
        } else {
            ans = m; 
            l = m + 1;
        }
    }
    cout << "! " << ans << endl;
    cout.flush();
}
