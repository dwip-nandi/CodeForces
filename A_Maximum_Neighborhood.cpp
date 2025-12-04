#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        else if(n==2){
            cout<<9<<endl;
            continue;
        }
        else if(n>2 && n<5){
            cout<<4*(n*n)-(n+4)<<endl;
            continue;
        }
        cout<<n*((n-2)+ 3LL*(n-1)+n)-5<<endl;
    }
}