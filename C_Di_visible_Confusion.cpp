#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        bool isPossible=true;
        for(int i=0;i<n;i++){
            cin>>v[i];
            int ind=-1;
            for(int j=2;j<=i+2;j++){
                if(v[i]%j!=0){
                    ind=i;
                    break;
                }
            }
            if(ind==-1)isPossible=false;
        }
        if(isPossible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}