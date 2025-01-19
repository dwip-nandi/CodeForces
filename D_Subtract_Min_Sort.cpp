#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        bool isPosible = true;

        ll i=0;
        while(i<n-1){
            if(v[i]>v[i+1]){
                isPosible=false;
                break;
            }else{
                v[i+1] = v[i+1]-v[i];
                v[i]=0;
            }
            i++;
        }
        if(isPosible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}