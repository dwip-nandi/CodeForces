#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll x=0,y=0,z=0,index=30;
        for(int i=30;i>=0;i--){
            if((l&(1LL<<i)) != (r&(1LL<<i))){
                index = i;
                break;
            }
        }
        x=l|((1LL<<index)-1);
        y=x+1;
        z=r;
        if(z==x || z==y)z--;
        if(z==x || z==y)z--;
        if(z==x || z==y)z--;
        cout<<x<<' '<<y<<' '<<z<<endl;
    }
}