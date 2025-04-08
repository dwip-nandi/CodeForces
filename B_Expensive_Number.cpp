#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ind=0,n=s.size();
        for(int i=n-1;i>0;i--){
            if(s[i]!='0')
            { ind=i;
              break;
            }
        }
        int c=0;
        for(int i=0;i<ind;i++){
            if(s[i]=='0')c++;
        }
        cout<<n-c-1<<endl;
    }
}