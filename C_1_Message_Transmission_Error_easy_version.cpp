#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    int j=len-1;
    string f="",d="";
    for(int i=0;i<len-1;i++){
        f=f+s[i]; d=d+s[j-i];
       if(i>=j-1){
        reverse(d.begin(),d.end());
            cout<<"YES"<<endl;
            cout<<f<<endl;
        reverse(d.begin(),d.end());
     
       }
       
    } cout<<"NO"<<endl;
}