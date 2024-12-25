#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> va(n);
        vector<int> vb(n);
        
        for (int i = 0; i < n; i++) {
            cin >> va[i];
        }
        sort(va.begin(), va.end());
        
        for (int j = 0; j < n; j++) {
            cin >> vb[j];
        }
        sort(vb.begin(), vb.end());
        
        bool isPossible = true;
        for (int k = 0; k < n; k++) {
            if (va[k] > vb[k] || (vb[k] - va[k]) > 1) {
                isPossible = false;
                break;
            }
        }
        
        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}