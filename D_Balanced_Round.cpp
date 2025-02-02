#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int c=0,mx=0;
        for(int i=0;i<n-1;i++){
            if((v[i+1]-v[i])<=k){
                c++;
                if(c>mx){
                mx=c;
            }
            }else c=0;
        }
        cout<<n-mx-1<<endl;
    }
}