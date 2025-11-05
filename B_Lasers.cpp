#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int>va(n),vb(m);
        for(int i=0;i<n;i++)cin>>va[i];
        for(int i=0;i<m;i++)cin>>vb[i];
        cout<<(n+m)<<endl;
    }
}