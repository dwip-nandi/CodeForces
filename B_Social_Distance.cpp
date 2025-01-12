#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        int mx=0,mn=m;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
            sum +=v[i];
        }
        //cout<<mx<<' '<<mn<<endl;
        if((sum+mx-mn+n)<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}