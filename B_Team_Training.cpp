#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, x; 
        cin >> n >> x;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        
        int c = 0; 
        int tz = 0;  
        
        for (int i = 0; i < n; i++) {
            tz++; 
            if (tz * v[i] >= x) {
                c++; 
                tz = 0; 
            }
        }
        
        cout << c << endl;
    }
    
    return 0;
}
