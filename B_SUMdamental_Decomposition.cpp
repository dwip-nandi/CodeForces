#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1)
           if(x==0){
            cout<<-1<<endl;
            continue;
           }
        else{ 
           cout<<x<<endl;
           continue;
        }
        
        int c = __builtin_popcountll(x);
        if(c>n){
            cout<<x<<endl;
            continue;
        }
        int ans =x+n-c;
        if((n-c)%2){
            if(x==0 || x==1)ans +=3;
            else ans++;
        }
        cout<<ans<<endl;

    }
}