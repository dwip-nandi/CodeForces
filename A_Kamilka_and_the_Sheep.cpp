#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int mx=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>mx)mx=v[i];
            if(v[i]<mn)mn=v[i];
        }
        cout<<mx-mn<<endl;
    }
}