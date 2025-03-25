#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        map<int, int> mp = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int ind = -1;
        bool isPossible = false;

        for (int i = 0; i < n; i++) {
            if (mp.find(v[i]) != mp.end()) {
                mp[v[i]]--;
            }

            bool iscol = true;
            for (auto& pair : mp) {
                if (pair.second > 0) {
                    iscol = false;
                    break;
                }
            }

            if (iscol) {
                isPossible = true;
                ind = i;
                break;
            }
        }

        if (isPossible) {
            cout << ind + 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
