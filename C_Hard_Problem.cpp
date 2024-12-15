#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long row1 = min(a, m);
        long long row2 = min(b, m);
        long long remainingSeatsRow1 = m - row1;
        long long remainingSeatsRow2 = m - row2;
        long long noPreference = min(c, remainingSeatsRow1 + remainingSeatsRow2);
        long long totalMonkeysSeated = row1 + row2 + noPreference;
        cout << totalMonkeysSeated << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
