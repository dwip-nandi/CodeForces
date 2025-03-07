#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0, index=n-1;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                index=i;
                break;
            } else {
                c=1;
            }
        }
        for(int i=index; i>=0; i--){
            int c1=0, c2=0;
            while(s[i]=='0' && i>=0){
                c1=1;
                i--;
            }
            while(s[i]=='1' && i>=0){
                c2=1;
                i--;
            }
            if(c1==1 && c2==1){
                c +=2;
                i++;
            }
        }
        cout<<c<<endl;
    }
}
