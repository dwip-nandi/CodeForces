#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b)cout<<0<<' '<<0<<endl;
        else{
            int d = abs(a-b);
            int m = min(a%d,d-(a%d));
            cout<<d<<' '<<m<<endl;
        }
    }
}