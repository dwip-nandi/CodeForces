#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1, c = 1; ; i++, c = c * 2 + 2) {
            if (c >= n) {
                cout << i << '\n';
                break;
            }
        }
    }
    
    return 0;
}