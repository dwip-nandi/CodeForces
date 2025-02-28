#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        vector<int> pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] ^ arr[i];

        bool ans = false;
        for (int i = 1; i < n; i++) {
            int a = pre[i];
            int b = pre[n] ^ pre[i];
            if (a == b) {
                ans = true;
                break;
            }
        }

        if (!ans) {
            for (int i = 1; i < n - 1; i++) {
                int a = pre[i];
                for (int j = i + 1; j < n; j++) {
                    int b = pre[j] ^ pre[i];
                    int c = pre[n] ^ pre[j];
                    if (a == b && b == c) {
                        ans = true;
                        break;
                    }
                }
                if (ans) break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
