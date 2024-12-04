#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    string s(n,'0');
    for(int i=0;i<n;i++){
        if(s1[i]==s2[i]){s[i]='0';}
        else {s[i]='1';}
    }
    cout<<s<<endl;
}