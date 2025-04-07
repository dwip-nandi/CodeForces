#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());

        if(v[0]==v[1]){
            cout<<"YES"<<endl;
            continue;
        }
        int g=0;
        if(v[0]==1){
            for(int i=1;i<n;i++)
                g = __gcd(g,v[i]);

            if(g==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        vector<int>vr;
        for(int i=1;i<n;i++){
           if(v[i]%v[0]==0)vr.push_back(v[i]);
        }
        g=0;
        for(int i=0;i<vr.size();i++){
            g = __gcd(g,vr[i]);
        }
        if(g==v[0])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}