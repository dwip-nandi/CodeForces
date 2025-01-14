#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int c=0,mx=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                c++;
                if(c>mx)
                   mx=c;
            }
            else if(v[i]==1)c=0;
        }
        cout<<mx<<endl;
    }
}