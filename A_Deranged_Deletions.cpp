#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        vector<int>vb=v;
        vector<int>vr;
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]!=vb[i]) {
                c++;
                vr.push_back(vb[i]);
            }
        }
        if(c==0)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl<<c<<endl;
            for(int i=0;i<vr.size();i++)cout<<vr[i]<<' ';
            cout<<endl;
        }
    }
}