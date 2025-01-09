#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(__gcd(n,i)==1)v.push_back(i);
    }
    int m=1;
    for(int i=0;i<v.size();i++){
        m=(m*v[i])%n;
    }
    if(m==1){
        cout<<v.size()<<endl;
        for(int j=0;j<v.size();j++)cout<<v[j]<<' ';
        cout<<endl;
    }else{
        cout<<v.size()-1<<endl;
        for(int k=0;k<v.size();k++){
            if(v[k]==m)continue ;
            cout<<v[k]<<' ';
        }cout<<endl;
    }
}