#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')a++;
        else b++;
    }
    if(a<b)swap(a,b);

    if(a==b)cout<<0<<endl;
    else cout<<a-b<<endl;

}