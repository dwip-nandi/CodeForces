#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int operations = 0;
    int r=0,l=0;
    while(n>r){
        if(s[r]=='0'){
            int x =m-1,ok=0;
            while(x--){
                if(s[r]=='0')r++;
                else{
                    r++;
                    ok=1;
                    break;
                }
            }
            if(!ok && s[r]=='0'){
                l=r+k;
                r=l;
                operations++;
            }
        }else r++;
    }
    cout << operations << endl;
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