#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int mnp = min_element(a.begin(), a.end()) - a.begin();
        int mxp = max_element(a.begin(), a.end()) - a.begin();

        int l = max(mnp, mxp) + 1;

        int r = max(n - mnp - 1, n - mxp - 1) + 1;

        int b = min(mnp + 1 + (n - mxp), mxp + 1 + (n - mnp));

        cout << min({l, r, b}) << endl;
    }

    return 0;
}
