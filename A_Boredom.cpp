#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

const int MAX = 100005;
int cnt[MAX];
int dp[MAX];

void solve() {
    int n;
    cin >> n;
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        max_val = max(max_val, x);
    }

    dp[0] = 0;
    dp[1] = cnt[1] * 1;

    for (int i = 2; i <= max_val; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * cnt[i]);
    }

    cout << dp[max_val] << endl;
}

signed main() {
    fast_io;
    solve();
    return 0;
}