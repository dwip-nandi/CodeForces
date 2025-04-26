#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n%10;
        string s = to_string(n);
        int y=s.size();
        
        if(y==4)cout<<x*10<<endl;
        else if(y==3)cout<<(x-1)*10 + 6<< endl;
        else if(y==2)cout<<(x-1)*10 + 3<<endl;
        else cout<<(x-1)*10 + 1<<endl;
    }
}