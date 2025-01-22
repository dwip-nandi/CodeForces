#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll toEraseZero(ll n) {
    string s = to_string(n);
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    return stoi(s);
}

int main() {
    string a, b;
    cin >> a >> b;
    ll x = stoll(a), y = stoll(b); // Use stoll for long long
    ll s = x + y;
    ll na = toEraseZero(x);
    ll nb = toEraseZero(y);
    ll ns = toEraseZero(s);
    
    if (na + nb == ns) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
