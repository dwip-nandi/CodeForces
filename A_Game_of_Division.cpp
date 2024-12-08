#include <bits/stdc++.h>
using namespace std;

void codeN() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool possible = false;
    int index = -1;

    for (int i = 0; i < n; i++) {
        bool canWin = true;
        for (int j = 0; j < n; j++) {
            if (i != j && abs(v[i] - v[j]) % k == 0) {
                canWin = false;
                break;
            }
        }
        if (canWin) {
            possible = true;
            index = i + 1; 
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl << index << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        codeN();
    }
    return 0;
}
