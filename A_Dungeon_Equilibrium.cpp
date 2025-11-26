#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n+1), f(n+1, 0);

        int mn = INT_MAX, mx = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            f[v[i]]++;
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
        }
        int c = 0;
        for (int i = mn; i <= mx; i++) {
            //cout<<f[i]<<' ';
            if(i==0)c+=f[0];
            else if (f[i] != 0 && f[i] != i){
                if(f[i]>i)c+=(f[i]-i);
                if(f[i]<i)c+=f[i];
            }
        }
        cout << c << endl;
    }
}
