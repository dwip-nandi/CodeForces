#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool ishappy = false;
        if (n >= 2020) {
            int x=n/2020;
            long long d = x*2020;
            int m = n-d;
            if ( m<=x ) {
                ishappy = true;
            }
        }
        if (ishappy) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
