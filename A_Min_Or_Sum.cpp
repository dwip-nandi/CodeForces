#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int result =0;
        for(int j=0;j<n;j++){
            result =(result | v[j]);
        }
        cout<<result<<endl;
    }
}