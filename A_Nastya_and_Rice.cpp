#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int x=n*(a+b);
        int y=n*(a-b);
        int p=c+d;
        int q=c-d;
        if(y<=p && x>=q)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}