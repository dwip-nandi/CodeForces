#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int co=0,ce=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]&1==1)co++;
            else ce++;
        }
        if(ce>0)cout<<co+1<<endl;
        else if(ce==0)cout<<co-1<<endl;
    }
}