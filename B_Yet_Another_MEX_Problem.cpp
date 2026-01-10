#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int mx = 0;
    int c = 0;

    for (int v : s) {
        if (c >= k - 1) break; 

        if (v != mx) {
            cout << mx << endl;
            return;
        }
        mx++;
        c++;
    }

    cout << mx << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}