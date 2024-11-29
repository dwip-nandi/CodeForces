#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int w, b;
    cin >> w >> b;
    
    int k = sqrt(2LL * (w + b));
    if (1LL * k * (k + 1) / 2 > w + b) {
        k--;
    }
    cout << k <<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
