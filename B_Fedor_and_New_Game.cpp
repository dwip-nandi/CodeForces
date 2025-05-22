#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<=m;i++)cin>>v[i];
    int c=0;
    for(int i=0;i<m;i++)
       if(__builtin_popcount(v[m]^v[i])<=k)c++;
    cout<<c<<endl;
}
/*#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    m++;
    vector<ll>v;
    while(m--){
        ll a;
        cin>>a;
        ll s=0;
        ll i=0;
        while(a!=0){
            if((a&1)!=0)s +=i;
            a = a>>1;
            i++;
        }
        v.push_back(s);
    }
    for(auto u:v)cout<<u<<' ';
    cout<<endl;
    ll c=0;
    for(int i=0;i<m;i++){
        cout<<(v[m]-v[i])<<' ';
        if(abs(v[m]-v[i])<=k)c++;
    }
    cout<<c<<endl;
}*/