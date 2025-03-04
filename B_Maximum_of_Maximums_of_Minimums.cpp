#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(k==1){
        ll mn =*min_element(v.begin(),v.end());
        cout<<mn<<endl;
    }else if(k>2){
        ll mx = *max_element(v.begin(),v.end());
        cout<<mx<<endl;
    }else{
        cout<<max(v[0],v[n-1])<<endl;
    }
}