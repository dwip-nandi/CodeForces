#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int small=a;
        if(a>b)small=b;
        int n,m;
        cin>>n>>m;
        int off_cost=a*m;
        int small_cost = small*n;
        int x=n/(m+1);
        int y=n%(m+1);
        int small_ofer_cost=(off_cost*x)+(y*small);
        if(small_cost<small_ofer_cost)cout<<small_cost<<endl;
        else cout<<small_ofer_cost<<endl;
    }
}