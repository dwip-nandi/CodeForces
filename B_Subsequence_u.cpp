#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    l--;r--;
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin>>v[i];
    multiset<int>s;
    for(int i=l;i<=r;i++)s.insert(v[i]);

    vector<int>vl;
    for(int i=0;i<l;i++)vl.push_back(v[i]);
    sort(vl.begin(),vl.end());
    int ans1=0;
    for(auto u:vl){
        if(s.empty())break;

        if(u< *s.rbegin()){
            ans1 +=u;
            s.erase(s.find( *s.rbegin()));
        }else break;
    }
    while(!s.empty()){
        ans1 += *s.begin();
        s.erase(s.find( *s.begin()));
    }
    for(int i=l;i<=r;i++)s.insert(v[i]);
    vl.clear();
    for(int i=r+1;i<n;i++)vl.push_back(v[i]);
    sort(vl.begin(),vl.end());
    int ans2=0;
    for(auto u:vl){
        if(s.empty())break;

        if(u< *s.rbegin()){
            ans2 +=u;
            s.erase(s.find( *s.rbegin()));
        }else break;
    }
    while(!s.empty()){
        ans2 += *s.begin();
        s.erase(s.find( *s.begin()));
    }
    cout << min(ans1,ans2) << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
