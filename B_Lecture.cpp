#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n,m;
    cin >>n>>m ;
    unordered_map<string,string>mp;
    for(int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        if(b.size()<a.size())mp[a]=b;
        else mp[a]=a;
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        cout<<mp[s]<<' ';
    }cout<<endl;
}

signed main() {
    fast_io;
    int t=1;
    // cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
