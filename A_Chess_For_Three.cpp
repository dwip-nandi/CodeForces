#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2!=0)cout<<-1<<endl;
        else{
            if(a==0 && b==0 && c==0)cout<<0<<endl;
            else if(a==0 && b!=0 && c!=0)cout<<b<<endl;
            else if(a+b<=c)cout<<a+b<<endl;         
            else cout<<(a+b+c)/2<<endl;
        }
    }
}