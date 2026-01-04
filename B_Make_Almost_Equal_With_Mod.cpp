#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    int k=2;
    for(int i=1;i<=60;i++){
        set<int>s;
        for(int j=0;j<n;j++){
            s.insert(v[j]%k);
        }
        if(s.size()==2){
            cout<<k<<endl;
            return ;
        }
        k *=2; 
    }
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
