#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>vn;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i!=v[i])vn.push_back(v[i]);
        }
        int ans=vn[0];
        for(int i=1;i<vn.size();i++){
            ans = (ans&vn[i]);
        }
        cout<<ans<<endl;

    }
}