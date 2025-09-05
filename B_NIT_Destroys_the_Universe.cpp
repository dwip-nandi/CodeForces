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
        bool f=false;
        int c=0;
        for(int i=0;i<n;i++){
           
            if(v[i]!=0){
                 if(!f){
                    c++;
                    f=true;
                 }
            }else f=false;        
        }
        cout<<min(c,2)<<endl;
    }

}