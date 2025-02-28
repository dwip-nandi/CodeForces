#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        k=abs(k);
        if((n*p)>=abs(k)){
            if(k%p==0)cout<<k/p<<endl;
            else cout<<(k/p)+1<<endl;
        }else cout<<-1<<endl;
    }
}