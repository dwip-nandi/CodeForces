#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        set<int>s;
        for(int i=0;i<4;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        if(s.size()==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}