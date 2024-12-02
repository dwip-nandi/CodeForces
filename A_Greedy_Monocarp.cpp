#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend()); 

    int total_coins = accumulate(a.begin(), a.end(), 0);
    if (total_coins < k) {
        cout << k - total_coins << endl; 
        return;
    }

    int c = 0, i = 0;
    while (c <= k) {
        c += a[i++];
    }

    int t = 0;
    for (int j = 0; j < i - 1; ++j) {
        t += a[j];
    }

    int additional_coins = max(0, k - t);
    cout << additional_coins << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
