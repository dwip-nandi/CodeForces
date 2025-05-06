#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(x>k)x=k;
        if(y>k)y=k;
        cout<<x*y<<endl;
    }
}