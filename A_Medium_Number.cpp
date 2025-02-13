#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx =max(a,max(b,c));
        int mn =min(a,min(b,c));
        cout<<(a+b+c)-(mx+mn)<<endl;;
    }
}