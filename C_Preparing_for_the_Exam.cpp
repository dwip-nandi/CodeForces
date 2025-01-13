#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>va(n);
        for(int i=0;i<m;i++)cin>>va[i];
        map<int,int>mp;
        for(int i=0;i<k;i++){
            int x;cin>>x;
            mp[x]++;
        }
        if(n==k){
            for(int i=0;i<m;i++)cout<<1;
        }
        else if(k==n-1){
            for(int i=0;i<m;i++){
                if(mp[va[i]])cout<<0;
                else cout<<1;
            }
        }else {
            for(int i=0;i<m;i++)cout<<0;
        }
        cout<<endl;
    }
}