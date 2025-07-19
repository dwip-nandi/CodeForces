#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=9;bool is =true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cout<<0<<endl;
                is =false;
                break;
            }
            else if((s[i]-'0')<c)c=s[i]-'0';
        }
        if(is) cout<<c<<endl;
    }
}