#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0)cout<<0<<endl;
        else if(n%3==1)cout<<2<<endl;
        else cout<<1<<endl;
    }
}