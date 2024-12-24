#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll codeN(ll n) {
    if (n <= 3) return 1;
    return 2 * codeN(n / 4);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << codeN(n) << endl;
    }
    return 0;
}
