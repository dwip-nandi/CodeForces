#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        if(n%2==1 && h%2==1 ){
            if((n-h)%(h-1)==0)cout<<((n-h))/(h-1)+1<<endl;
            else cout<<(n-h)/(h-1)+2<<endl;
        }else if(n%2==0 && h%2==0 ){
            cout<<((n+h-1)/h)<<endl;
        }else if(n%2==0 && h%2==1){
            cout<<((n+h-2)/(h-1))<<endl;
        }else if(n%2!=0 && h%2==0){
            if((n-(h-1))%h==0)cout<<((n-(h-1))/h)+1<<endl;
            else cout<<((n-(h-1))/h)+2<<endl;
        }
    }

}