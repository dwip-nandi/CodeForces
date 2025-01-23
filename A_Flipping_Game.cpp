#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ones = count(a.begin(), a.end(), 1);
    int max_impact = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int impact = 0;
            for (int k = i; k <= j; k++) {
                if (a[k] == 0) {
                    impact++;
                } else {
                    impact--;
                }
            }
            max_impact = max(max_impact, impact);
        }
    }

    if (ones == n) {
        cout << n - 1 << endl;
    } else {
        cout << ones + max_impact << endl;
    }

    return 0;
}
