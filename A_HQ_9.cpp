#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0;
    for(char c:s){
        if(c=='H'||c=='Q'||c=='9')x++;
    }
    if(x>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
