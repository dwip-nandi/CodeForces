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
        int t=0,m=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T')t++;
            else m++;
        }
        bool isPossible=true;
        if(t!=(2*m)){
            isPossible=false;
        }
        else{
            string r=s;
            reverse(r.begin(),r.end());
            int tf=0,mf=0;
            int tr=0,mr=0;
            for(int i=0;i<n;i++){
                if(s[i]=='T')tf++;
                else mf++;
                if(mf>tf){
                    isPossible=false;
                    break;
                }

                if(r[i]=='T')tr++;
                else mr++;
                if(mr>tr){
                    isPossible=false;
                    break;
                }
            }
        }
        if(isPossible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}