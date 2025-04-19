#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()%2==1)cout<<-1<<endl;
    else{
        int l=0,r=0,u=0,d=0;
        for(char c:s){
            if(c=='L')l++;
            else if(c=='R')r++;
            else if(c=='U')u++;
            else d++;
        }
        int x=abs(l-r);
        int y=abs(u-d);
        cout<<(x+y)/2<<endl;
    }
}