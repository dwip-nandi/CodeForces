#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>v;
        for(int i=0;i<n;i++){
            if((i|x) != x){
                v.resize(n);
                break;
            }
            v.push_back(i);
        }
        ll curentOR=0;
        for(auto u:v){
            curentOR |= u;
        }
        if(x!=curentOR){
            v.pop_back();
            v.push_back(x);
        }
        for(int a:v){
            cout<<a<<' ';
        }
        cout<<endl;
    }
}
