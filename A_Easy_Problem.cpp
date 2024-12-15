#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        for (int b = 1; b < n; ++b) {
            int a = n - b;
            if (a > 0) {
                ++count;
            }
        }
        cout << count << endl;
    }
}

int main() {
    solve();
    return 0;
}
