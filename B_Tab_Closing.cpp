#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        if(b>=a){
            cout<<1<<endl;
            continue;
        }
        if(n<=(a/b))cout<<1<<endl;
        else cout<<2<<endl;
    }
}