#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> va(n * n);
        for (int i = 0; i < n * n; i++) cin >> va[i];

        sort(va.begin(), va.end());

        int base = va[0];
        vector<int> vb;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                vb.push_back(base + i * c + j * d);
            }
        }

        sort(vb.begin(), vb.end());

        if (va == vb)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
