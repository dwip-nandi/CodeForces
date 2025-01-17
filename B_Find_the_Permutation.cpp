#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<long long> p(n);
        iota(p.begin(), p.end(), 0);
        sort(p.begin(), p.end(), [&](int x, int y) {
            if (x < y) {
                return v[x][y] == '1';
            } else {
                return v[y][x] == '0';
            }
        });

        for (int j = 0; j < n; j++) {
            cout << p[j] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
