#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.length();
    int c=0;bool is = true;
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-i-1]){
           c++;
           if(c>1){
            is = false;
            break;
           }
        }
       
    if(is)
     if(n%2==1)
        cout<<"YES"<<endl;
     else 
       if(c==0)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}