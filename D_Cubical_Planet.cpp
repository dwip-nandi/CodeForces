#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>va(3);
    for(int i=0;i<3;i++)cin>>va[i];
    vector<int>vb(3);
    for(int i=0;i<3;i++)cin>>vb[i];
    bool isPosible=false;
    for(int i=0;i<3;i++){
        if(va[i]==vb[i]){
            isPosible=true;
            break;
        }
    }
    if(isPosible)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}