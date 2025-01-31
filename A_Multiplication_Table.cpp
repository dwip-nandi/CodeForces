#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,x;
    cin>>n>>x;
    int c=0;
    for(int i=1;i<=n;i++){
       if(x%i==0){
         if(x/i<=n)c++;
       }
    }
    cout<<c<<endl;
}