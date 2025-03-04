#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> strengths(n);
    for (int i = 0; i < n; ++i) {
        cin >> strengths[i];
    }
    
    int max1 = -1, max2 = -1;
    for (int i = 0; i < n; ++i) {
        if (strengths[i] > max1) {
            max2 = max1;
            max1 = strengths[i];
        } else if (strengths[i] > max2) {
            max2 = strengths[i];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (strengths[i] == max1) {
            cout << strengths[i] - max2 << " ";
        } else {
            cout << strengths[i] - max1 << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
