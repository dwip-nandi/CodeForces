#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll codeN(vector<ll>& v, ll n, ll destination) {
    ll odd = 0, even = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        ll x = destination - v[i];
        sum += x;
        even += x / 2;
        odd += x % 2;
    }
    ll ans = sum / 3 * 2;
    ans += sum % 3;
    return max(odd * 2 - 1, ans);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll mxh = -1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (mxh < v[i]) {
                mxh = v[i];
            }
        }
        ll ans = min(codeN(v, n, mxh), codeN(v, n, mxh + 1));
        cout << ans << endl; 
    }
    return 0;
}
