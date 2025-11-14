#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
    
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int same = 0, gr = 0, small = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] == m) same++;
            else if (v[i] > m) gr++;
            else small++;
        }

        if (small < gr)
            cout << m + 1 << endl;
        else
            cout << m - 1 << endl;
    }
}
