#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> codN(ll n, ll d) {
    vector<int> vr;
    vr.push_back(1);
    if (n >= 3 || d % 3 == 0) vr.push_back(3);
    if (d == 5) vr.push_back(5);
    if (n >= 3 || (n == 2 && d == 7)) vr.push_back(7);
    if (n >= 6) vr.push_back(9);
    else {
        ll fac = 1;
        for (int p = 2; p <= n; ++p) {
            fac *= p;
        }
        if ((fac * d) % 9 == 0) {
            vr.push_back(9);
        }
    }
    return vr;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int d;
        cin >> n >> d;

        vector<int> vr = codN(n, d);
        for (int k : vr) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
