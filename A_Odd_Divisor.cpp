#include <bits/stdc++.h>
using namespace std;

bool hasOddDivisor(long long n) {
    return (n & (n - 1)) != 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (hasOddDivisor(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
