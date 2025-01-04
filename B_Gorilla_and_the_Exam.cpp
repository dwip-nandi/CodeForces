#include <bits/stdc++.h>
using namespace std;

void codeN() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }

        vector<int> counts;
        for (const auto &p : m) {
            counts.push_back(p.second);
        }
        sort(counts.begin(), counts.end());
        
        if (k == n) {
            cout << 1 << endl;
        } else if (k == 0) {
            cout << counts.size() << endl;
        } else {
            int bs = counts.size();
            for (int i = 0; i < counts.size() && k > 0; ++i) {
                if (counts[i] <= k) {
                    k -= counts[i];
                    bs--;
                } else {
                    break;
                }
            }
            cout << bs << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    codeN();
    return 0;
}
