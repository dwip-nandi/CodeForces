#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<char>setx;
    for(int i=0;i<s.size();i++){
       setx.insert(s[i]);
    }
    
    if(setx.size()<=3)cout<<setx.size()-2<<endl;
    else cout<<setx.size()-4<<endl;
}
