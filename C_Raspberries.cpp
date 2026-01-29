#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int ec = 0;
    int mn = k; 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        if (a[i] % 2 == 0) ec++;
        
        int ops;
        if (a[i] % k == 0) ops = 0;
        else ops = k - (a[i] % k);
        
        mn = min(mn, ops);
    }
    if (k == 4) {
        int op4 = max(0, 2 - ec);
        mn = min(mn, op4);
    }
    cout << mn << endl;
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