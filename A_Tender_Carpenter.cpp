#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool isposible=false;
        for(int i=0;i<n-1;i++){
            int mx = max(v[i],v[i+1]);
            int mn = min(v[i],v[i+1]);
            if(2*mn>mx){
                isposible=true;
                break;
            }
        }
        if(isposible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}