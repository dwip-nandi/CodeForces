#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if (b >= 2 * a) {
            cout << a << "\n";
        } else {
            cout << (a + b) / 3 << "\n";
        }
    }
    return 0;
}