#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        sort(s.begin(),s.end());
        sort(p.begin(),p.end());
        if(s==p)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}