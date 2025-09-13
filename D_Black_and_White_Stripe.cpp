#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0,ans=INT_MAX;
        for(int i=0;i<k;i++){
           if(s[i]=='W')c++;
        }
        ans = c;
        for(int i=k;i<n;i++){
            if(s[i-k]=='W')c--;
            if(s[i]=='W')c++;
            ans=min(ans,c);
        }
        cout<<ans<<endl;
    }
}