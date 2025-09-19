#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin >> n>>m;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin >>v[i] ;
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(int i=0; i<n; i++) {
            ans = ans + (v[i]*m);
            //cout<<ans<<' ';
            m--;
            if(m==0)break;
        }
        cout << ans << endl;
    }
    return 0;
}