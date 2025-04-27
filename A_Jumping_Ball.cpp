#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<')p++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='>')p++;
        else break;
    }
    cout<<p<<endl;

}