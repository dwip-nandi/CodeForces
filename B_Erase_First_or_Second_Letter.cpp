#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        int c=0;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]==1)c++;
            v[i]=c;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
}