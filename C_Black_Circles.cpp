#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>pa;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            pa.push_back({x,y});
        }
        int s1,s2,d1,d2;
        cin>>s1>>s2>>d1>>d2;
        int r = (1LL)*(s1-d1)*(s1-d1) + (1LL)*(s2-d2)*(s2-d2);
        bool is = true;
        for(auto u:pa){
            int f = u.first,s= u.second;
            int a =(1LL)*(f-d1)*(f-d1) + (1LL)*(s-d2)*(s-d2);
            if(a<=r){
                is = false;
                break;
            }
        }
        if(is)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}