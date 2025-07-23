#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int c = 0;
        int i = 0;
        while (i <= n - k) {
            bool is = true;
            for (int j = i; j < i + k; j++) {
                if (a[j] != 0) {
                    is = false;
                    break;
                }
            }

            if (is) {
                c++;
                i += k + 1;  
            } else {
                i++;
            }
        }

        cout << c <<endl;
    }
}
