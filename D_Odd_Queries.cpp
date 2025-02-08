/*#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        ll sum = 0;
        
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        
        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;
            ll rl = r - l + 1;
            ll rs = accumulate(v.begin() + (l - 1), v.begin() + r, 0LL);
            ll ns = sum - rs + (rl * k);
            
            if (ns % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}*/
// update code
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> prefix_sum(n + 1, 0);
        
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            prefix_sum[i + 1] = prefix_sum[i] + v[i];
        }
        
        ll total_sum = prefix_sum[n];
        
        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;
            ll range_sum = prefix_sum[r] - prefix_sum[l - 1];
            ll new_sum = total_sum - range_sum + (r - l + 1) * k;
            
            if (new_sum % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
