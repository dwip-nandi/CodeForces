#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        int a,b; cin>>a>>b;
        int m =min(b, a+a);
        if(x<y) swap(x,y);

        cout<<m*y + (x-y)*a<<endl;
    }
    
    return 0;
}
