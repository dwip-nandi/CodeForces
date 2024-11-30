#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    int ans = k;
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (k <= 1LL * (a[i] - d) * (n - i)) {
            break;
        } else {
            ans++;
            k -= 1LL * (a[i] - d) * (n - i);
        }
        d = a[i];
    }
    cout << ans <<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }    
}