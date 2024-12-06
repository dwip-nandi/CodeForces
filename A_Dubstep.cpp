#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.size();
    string newString;
    for(int i=0;i<n;i++){
        if (n>2 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'&& i+2<n)
        {
           i+=2;
           if(!newString.empty() && newString.back() !=' '){
              newString +=' ';
           }
        }else{
            newString +=s[i];
        }
        
    }
    if(!newString.empty() && newString.back() == ' '){
        newString.pop_back();
    }
    cout<<newString<<endl;
}