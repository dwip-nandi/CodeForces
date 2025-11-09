#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((a[j] % a[i]) % 2 == 0) {
                    cout << a[i] << " " << a[j] << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found) cout << "-1\n";
    }
    return 0;
}
