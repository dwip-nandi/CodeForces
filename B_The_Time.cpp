#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;

    int hh=(s[0]-'0')*10+(s[1]-'0');
    int mm=(s[3]-'0')*10+(s[4]-'0');
    int h = n/60;
    int m = n%60;

    int nm=0;
    if(mm+m>59){
        h++;
        nm= (mm+m)-60;
    }else nm = (mm+m);
    int x = (hh+h)%24;
    if(x<10)
     cout<<'0'<<x<<":";
    else cout<<x<<':';

    if(nm<10)
      cout<<'0'<<nm<<endl;
    else cout<<nm<<endl;
}