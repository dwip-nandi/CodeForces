#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n,mx=0,sum=0;
    cin >> n;
    vector<int>v(n),pr,mr;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum +=v[i];
        pr.push_back(sum);
        mx = max(mx,v[i]);
        mr.push_back(mx);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if((pr[i]-mr[i])==mr[i])c++;
    }
    cout <<c<< endl;
}
signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
