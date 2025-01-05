#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    for(ll i = 0; i < n; i++){
        ll mn, mx;
        if (i == 0) {
            mn = abs(v[i] - v[i+1]);
        } else if (i == n-1) {
            mn = abs(v[i] - v[i-1]);
        } else {
            mn = min(abs(v[i] - v[i-1]), abs(v[i] - v[i+1]));
        }
        mx = max(abs(v[i] - v[0]), abs(v[i] - v[n-1]));
        cout << mn << ' ' << mx << endl;
    }
    return 0;
}
