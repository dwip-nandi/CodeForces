#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<4+(n*3)<<endl;
    cout<<0<<' '<<0<<endl;
    cout<<0<<' '<<1<<endl;
    cout<<1<<' '<<0<<endl;
    cout<<1<<' '<<1<<endl;
    for(int i=1;i<=n;i++){
        cout<<i+1<<' '<<i<<endl;
        cout<<i<<' '<<i+1<<endl;
        cout<<i+1<<' '<<i+1<<endl;
    }
    cout<<endl;
}