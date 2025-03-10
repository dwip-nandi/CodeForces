#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n%2==1)cout<<"NO"<<endl;
        else{
            bool isPosible=true;
            for(int i=0;i<(n/2);i++){
               if(s[i]!=s[i+(n/2)]){
                   isPosible = false;
                   break;
               }
            }
            if(isPosible)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
}