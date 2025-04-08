#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string sa,sb;
        cin>>sa>>sb;
        
        int ca1=0,cb0=0,cao1=0,cae1=0,cbo0=0,cbe0=0;
        for(int i=0;i<n;i++){
            if(sa[i]=='1')ca1++;
            if(sb[i]=='0')cb0++;
            if(i%2==1 && sa[i]=='1')cao1++;
            else if(i%2==0 && sa[i]=='1')cae1++;
            if(i%2==1 && sb[i]=='0')cbo0++;
            else if(i%2==0 && sb[i]=='0')cbe0++;
        }
        bool isPossible=true;
        if(ca1>cb0)isPossible=false;
        if(cae1>cbo0)isPossible=false;
        if(cao1>cbe0)isPossible=false;

        if(isPossible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}