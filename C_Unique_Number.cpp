#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>45)cout<<-1<<endl;
        else{
            string s="";
            for(int i=9;i>=1;i--){
                if(n-i>=0){
                    s+=to_string(i);
                    n-=i;
                }
                if(n==0)break;
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
}