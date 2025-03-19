#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s,r;
        cin>>s;
        r += s[0];
        if(s[0]==s[1]){
            cout<<s[0]<<s[1]<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]>=s[i+1]){
                r += s[i+1];
            }else break;
        }
        string rr(r.rbegin(), r.rend());
        cout<<r+rr<<endl;
    }
}