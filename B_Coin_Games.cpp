#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c =0;
        for(int i=0;i<n;i++){
            if(s[i]=='U')c++;
        }
        if(c%2 !=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}