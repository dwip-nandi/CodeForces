#include<bits/stdc++.h>
using namespace std;
#define int long long

bool ch(int n){
    float x = sqrt(n*(n+1)/2);
    int y = sqrt(n*(n+1)/2);
    if(x==y)return false;
    else return true;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(!ch(n)){
            cout<<-1<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
             if(!ch(i)){
                cout<<i+1<<' '<<i<<' ';
                i++;
             }else cout<<i<<' ';
        }
        cout<<endl;
    }
}