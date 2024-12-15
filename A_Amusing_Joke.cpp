#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string ab =a+b;
    sort(ab.begin(),ab.end());
    sort(c.begin(),c.end());
    //cout<<ab<<endl;
    if((ab)==c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}