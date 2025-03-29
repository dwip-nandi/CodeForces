#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n % 2 == 1) { 
            bool isWin = false;
            for (int i = 0; i < n; i += 2) { 
                if ((s[i] - '0') % 2 == 1) { 
                    isWin = true;
                    break;
                }
            }
            cout << (isWin ? 1 : 2) << endl;
        } else { 
            bool bewin = false;
            for (int i = 1; i < n; i += 2) { 
                if ((s[i] - '0') % 2 == 0) { 
                    bewin = true;
                    break;
                }
            }
            cout << (bewin ? 2 : 1) << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
