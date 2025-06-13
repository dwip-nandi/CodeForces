#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vn(n);
    vector<int>vm(m);
    int mnn=INT_MAX,mxn=0,mnm=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>vn[i];
        if(vn[i]<mnn)mnn=vn[i];
        if(vn[i]>mxn)mxn=vn[i];
    }
    for(int i=0;i<m;i++){
        cin>>vm[i];
        if(vm[i]<mnm)mnm=vm[i];
    }
    if(mnm>mxn && mnn==mxn){
        if(mnn*2 < mnm)cout<<mnn*2<<endl;
        else cout<<-1<<endl;
    }
    else if(2*mnn<mnm && mxn<mnm){
        if(2*mnn<=mxn)
          cout<<mxn<<endl;
        else cout<<2*mnn<<endl;
    }
    else cout<<-1<<endl;
}