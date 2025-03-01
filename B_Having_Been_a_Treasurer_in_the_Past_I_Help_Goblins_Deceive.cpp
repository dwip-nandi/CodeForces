#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int h=0,u=0;
        string s;cin>>s;
        for(char c :s){
            if(c=='-')h++;
            else u++;
        }
        int e=0;
        if(h%2!=0)e=1;
        cout<<u*(h/2 + e)*(h/2)<<endl;
    }
}