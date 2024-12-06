#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    int p;
    cin>>p;
    vector<int>vp(p);
    for(int i=0;i<p;i++){
        cin>>vp[i];
        s.insert(vp[i]);
    }
    int q;
    cin>>q;
    vector<int>vq(q);
    for(int j=0;j<q;j++){
        cin>>vq[j];
        s.insert(vq[j]);
    }
    if(s.size()==n)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}